#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n+2][n+2];
    for (int i = 0; i < n+2; i++)
        for (int j = 0; j < n+2; j++)
            arr[i][j]=0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &arr[i][j]);
    int inter = 0, t_junc = 0, turn = 0, dead = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            // intersection
            if(arr[i][j] && arr[i-1][j] && arr[i+1][j] && arr[i][j-1] && arr[i][j+1]) inter++;
            // t_junc
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 3) ) t_junc++;
            // turn(本身是1 && 身旁兩個是1 && 非直線)
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 2) && arr[i-1][j] != arr[i+1][j]) turn++;
            // dead
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 1) ) dead++;
        }
    }
    printf("%d\n%d\n%d\n%d\n", inter, t_junc, turn, dead);
    return 0;
}