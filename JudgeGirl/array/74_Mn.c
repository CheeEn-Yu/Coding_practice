#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &m);
    // printf("======================\n");
    // for (int i = 0; i<n; i++) printf("%d\n", arr[i]);
    // printf("======================\n");
    // printf("m is %d\n", m);
    int ans[m];
    for (int i = 0; i < m; i++) ans[i] = 0;
    for (int i = 0; i < n; i++){
        // printf("arr[i] mod m is %d\n", arr[i] % m);
        ans[arr[i] % m]++;
    }
    for(int i = 0; i < m; i++) printf("%d\n", ans[i]);
    
    return 0;
}