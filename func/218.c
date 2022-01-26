#include <stdio.h>
int C(int n, int k){
    int ans = 1;
    int kfactory = 1;
    for (int i = n; i > n-k; i--) ans*=i; 
    for (int i = 1; i <= k; i++) kfactory*=i;
    return ans /= kfactory; 
}
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int sum = 0;
    for (int i = 0; i <= m; i++) sum+=C(n,i);
    printf("%d", sum);
    return 0;
}