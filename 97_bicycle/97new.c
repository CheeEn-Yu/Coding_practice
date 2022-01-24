#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, parkx[10], parky[10], c[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d%d", &parkx[i], &parky[i], &c[i]);
    int m;
    int sum[10] = {0};
    
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int bikex, bikey;
        scanf("%d %d", &bikex, &bikey);
        int distance = 200001, index = -1;
        for (int j = 0; j < n; j++)
        {
            if (c[j] == 0) continue;
            int d = abs(bikex - parkx[j]) + abs(bikey - parky[j]);
            if (d < distance ||
            d == distance && ( parkx[j] < parkx[index]
            || (parkx[j] == parkx[index] && parky[j] < parky[index]) )  )
            {
                distance = d;
                index = j;
            }
        }
        sum[index]++;
        c[index]--;
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", sum[i]);
    return 0;
}