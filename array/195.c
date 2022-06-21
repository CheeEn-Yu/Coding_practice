#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    bool board[3][3][2] = {0};
    int x,y,r = 0;
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if (x > 2 || y > 2 || x < 0 || y < 0) continue; // illegal position
        else if(board[x][y][0] || board[x][y][1]) continue; // 下過的位置不能再下
        else{
            if (r % 2 == 0) board[x][y][0] = true;
            else board[x][y][1] = true;
            r++;
        }
    }
    bool blackwin = 
       (board[0][0][0] && board[1][1][0] && board[2][2][0])
    || (board[0][2][0] && board[1][1][0] && board[2][0][0])
    // row
    || (board[0][0][0] && board[0][1][0] && board[0][2][0])
    || (board[1][0][0] && board[1][1][0] && board[1][2][0])
    || (board[2][0][0] && board[2][1][0] && board[2][2][0])
    // column
    || (board[0][0][0] && board[1][0][0] && board[2][0][0])
    || (board[0][1][0] && board[1][1][0] && board[2][1][0])
    || (board[0][2][0] && board[1][2][0] && board[2][2][0]);
    bool whitewin = 
       (board[0][0][1] && board[1][1][1] && board[2][2][1])
    || (board[0][2][1] && board[1][1][1] && board[2][0][1])
    // row
    || (board[0][0][1] && board[0][1][1] && board[0][2][1])
    || (board[1][0][1] && board[1][1][1] && board[1][2][1])
    || (board[2][0][1] && board[2][1][1] && board[2][2][1])
    // column
    || (board[0][0][1] && board[1][0][1] && board[2][0][1])
    || (board[0][1][1] && board[1][1][1] && board[2][1][1])
    || (board[0][2][1] && board[1][2][1] && board[2][2][1]);
    if (blackwin) printf("Black wins.");
    else if (whitewin) printf("White wins.");
    else printf("There is a draw.");
    return 0;
}