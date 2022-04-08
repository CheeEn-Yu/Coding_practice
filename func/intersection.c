#include "intersection.h"
void intersection(int map[100][100], int result[4]){
    int arr[102][102];
    for (int i = 0; i < 102; i++)
        for (int j = 0; j < 102; j++)
            arr[i][j]=0;
    for (int i = 0; i < 4; i++) result[i] = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            arr[i+1][j+1] = map[i][j];

    for (int i = 1; i <= 100; i++){
        for (int j = 1; j <= 100; j++){
            // intersection
            if(arr[i][j] && arr[i-1][j] && arr[i+1][j] && arr[i][j-1] && arr[i][j+1]) result[0]++;
            // t_junc
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 3) ) result[1]++;
            // turn(本身是1 && 身旁兩個是1 && 非直線)
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 2) && arr[i-1][j] != arr[i+1][j]) result[2]++;
            // dead
            if(arr[i][j] && (arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1] == 1) ) result[3]++;
        }
    }
}