#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int mod[m][3]; // 存答案
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 3; j++)
            mod[i][j] = 0;
    }
    for (int i = 0; i < m; i++){
        mod[i][2] = 10001;
    }
        // printf("%d\n", n);
    for (int i = 0; i < n; i++){
        int input;
        scanf("%d", &input);
        // printf("%d ", input);
        int tmp = (input % m);
        if (input > mod[tmp][1]) mod[tmp][1] = input;
        if (input < mod[tmp][2]) mod[tmp][2] = input;
        mod[tmp][0]+=input;
    }
        // printf("test\n");

    for (int i = 0; i < m; i++){
        for (int j = 0; j < 2; j++)
            printf ("%d ", mod[i][j]);
        printf("%d\n", mod[i][2]);
    }
    return 0;
}