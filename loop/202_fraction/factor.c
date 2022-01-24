#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a, &b);
    a = a < 0? -a:a;
    b = b < 0? -b:b;
    if (a < b){
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    int factor = 1;
    for (int i = 2; i <= b; i++)
    {
        if(a % i == 0 && b % i == 0){
            factor = i;
        }
    }
    printf("%d", factor);
    return 0;
}