#include <stdio.h>
int main(){
    double a, b, c;
    double pi = 3.1415926;
    scanf("%lf %lf %lf", &a, &b, &c);
    double area = c*c*pi*3/4;
    if (c > a) area += (c-a)*(c-a)*pi/4;
    if (c > b) area +=(c-b)*(c-b)*pi/4;
    printf("%f", area);
    return 0;
}