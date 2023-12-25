#include <stdio.h>
#include "max.h"
int max(int *iptr[], int n){
    int ans = -99999999;
    for(int i = 0; i < n; i++){
        if(*iptr[i] > ans) ans = *iptr[i];
    }
    return ans;
}