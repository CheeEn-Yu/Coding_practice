#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }
    int neighbors = 0, higher = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            neighbors = 0, higher = 0;
            if (i+1 < n) neighbors++;
            if (i-1 >= 0) neighbors++;
            if (j+1 < m) neighbors++;
            if (j-1 >= 0) neighbors++;

            if (i+1 < n && arr[i][j] > arr[i+1][j]) higher++;
            if (i-1 >= 0 && arr[i][j] > arr[i-1][j]) higher++;
            if (j+1 < m && arr[i][j] > arr[i][j+1]) higher++;
            if (j-1 >= 0 && arr[i][j] > arr[i][j-1]) higher++;

            if (neighbors == higher) printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}