#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    int num, localmax=0, globalmax=0, temp=0, positive=0, negative=0;
    while (scanf("%d", &num) != EOF){
        if (num > 0) positive++;
        if (positive == k && negative == k) localmax =  0;
    }

    return 0;
}