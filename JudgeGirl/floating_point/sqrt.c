#include <stdio.h>
int main(){
    double n;
    double error = 0.00000000001;
    scanf("%lf", &n);
    double low = 0, high = n;
    double x = (low+high)/2;
    while(x*x - n > error || n - x*x > error){
        if(x*x - n > error){
            high = x;
            x = (low+high)/2;
        }
        else{
            low = x;
            x = (low+high)/2;
        }
    }
    printf("%9.8f, %9.8f\n", x, error);
    return 0;
}