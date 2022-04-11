#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int f[n];
    for (int i = n-1; i >= 0; i--) scanf("%d", &f[i]);
    scanf("%d", &m);
    int g[m];
    for (int i = m-1; i >= 0; i--) scanf("%d", &g[i]);
    int ans[200] = {0};
    for (int i = n-1; i >= 0; i--)
        for (int j = m-1; j >= 0;j--) 
            ans[i+j] += (f[i]*g[j]);
    for (int i = n+m-2;i > 0; i--) printf("%d ", ans[i]);
    printf("%d", ans[0]);
    return 0;
}