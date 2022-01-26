#include<stdio.h>
int gcd(int x, int y){
    if (x % y == 0)
        return y;
    return gcd(y, x%y);
}

int main(){
    int num1, num2, lcm = 1,temp_lcm;
    scanf("%d", &num1);
    while (scanf("%d", &num2) != EOF){
        temp_lcm = num1 * num2 / gcd(num1, num2);
        if (temp_lcm > lcm)
            lcm = temp_lcm;
        num1 = lcm;
    }
    printf("%d", lcm);
    return 0;
}