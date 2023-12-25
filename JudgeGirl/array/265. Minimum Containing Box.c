#include <stdio.h>
int main(){
    int max_x = -10001, max_y = -10001;
    int min_x = 10001, min_y = 10001;
    int tmpx, tmpy;
    while (scanf("%d %d", &tmpx, &tmpy) != EOF){
        if (tmpx > max_x) max_x = tmpx;
        if (tmpy > max_y) max_y = tmpy;
        if (tmpx < min_x) min_x = tmpx;
        if (tmpy < min_y) min_y = tmpy;
    }
    int length = max_x - min_x, width = max_y - min_y;
    
    printf("%d", length * width);
    return 0;
}