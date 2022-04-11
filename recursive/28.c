#include <stdio.h>
int sum(int n){
    int ans = 0;
    if (n == 0) return 0;
    ans = n*n + sum(n-1);
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}