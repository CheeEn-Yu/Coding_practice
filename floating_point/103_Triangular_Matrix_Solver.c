#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    double a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%lf", &a[i][j]);
    double y[n];
    for(int i = 0; i < n; i++) scanf("%lf", &y[i]);
    double x[n];
    // x[3] = y[3]/a[3][3]
    // x[2] = (y[2] - a[2][3]*x[3]) / a[1][2]
    // x[1] = (y[1] - a[1][3]*x[3] - a[1][2]*x[2])/a[1][1]
    /*
    observe that 1st row at 1st column left only one
    2nd row at 2nd column left only one
    nth row at nth column left only one
    so we decide the range of loop j from n-1 to i
    */
    for(int i = n-1; i >= 0; i--){
        for (int j = n-1; j >= i; j--){
            if(i == j) x[i] = y[i]/a[i][j];
            if(j > i) y[i] -= a[i][j]*x[j];
        }
    }
    for (int i = 0; i < n; i++) printf("%f\n", x[i]);
    return 0;
}