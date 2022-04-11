#include<stdio.h>
#include "evaluate_f.h"
int evaluate_f(int *iptr[], int n, int *index){
    int x = (*iptr[0]);
    int y = *iptr[1];
    int ans = 4*x - 6*y;
    printf("%d\n%d", x, ans);
    return ans;
}