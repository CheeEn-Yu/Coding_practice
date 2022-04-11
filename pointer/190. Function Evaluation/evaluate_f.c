#include "evaluate_f.h"
int evaluate_f(int *iptr[], int n, int *index){
    int max = 4 * iptr[0][0] - 6 * iptr[0][1];
    *index = 0;
    for(int i = 1; i < n; i++){
        if(4 * iptr[i][0] - 6 * iptr[i][1] > max){
            max = 4 * iptr[i][0] - 6 * iptr[i][1];
            *index = i;
        }
    }
    return max;
}