#include <stdio.h>
#include<math.h>
int func_factor(int a, int b){
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
    return factor;
}
void func_add(int a,int b, int c,int d,int e,int f,int g);
void func_minus(int a,int b, int c,int d,int e,int f,int g);
void func_multiple(int a,int b, int c,int d,int e,int f,int g);
void func_division(int a,int b, int c,int d,int e,int f,int g);
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    int co_deno, no1, no2;
    int ans_deno, ans_no;
    if (d == 0){
        func_add(a,b,c,d,e,f,g);
    }else if(d == 1){
        e = -e;
        func_add(a,b,c,d,e,f,g);
    }else if(d == 2){
        func_multiple(a,b,c,d,e,f,g);
    }else if(d == 3){
        func_division(a,b,c,d,e,f,g);
    }
    return 0;
}
void func_add(int a,int b, int c,int d,int e,int f,int g){
    int co_deno, no1, no2;
    int ans_deno, ans_no;
    co_deno = c*g;
    no1 = a < 0?b * g + c * g * (-a):b * g + c * g * a; no2 = e < 0?f * c + c * g * (-e):f * c + c * g * e;
    no1 = a < 0 ? -no1 : no1;
    no2 = e < 0 ? -no2 : no2;
    ans_no = no1 + no2;
    int factor = func_factor(co_deno, ans_no);
    ans_no /= factor;
    co_deno /= factor;
    int ans_a,ans_b,ans_c;
    ans_a = ans_no / co_deno;
    ans_b = abs(ans_no % co_deno);
    ans_c = abs(co_deno);
    if(ans_b == 0)
    ans_c = 1;
    printf("%d\n%d\n%d", ans_a,ans_b,ans_c);
}
void func_multiple(int a,int b, int c,int d,int e,int f,int g){
    int co_deno, no1, no2;
    int ans_deno, ans_no;
    no1 = a < 0 ? (-a) * c + b: a * c + b; no2 = e < 0 ? (-e) * g + f: e * g + f;
    no1 = a < 0 ? -no1 : no1;
    no2 = e < 0 ? -no2 : no2;
    co_deno = c * g;
    ans_no = no1 * no2;
    int factor = func_factor(co_deno, ans_no);
    ans_no /= factor;
    co_deno /= factor;
    int ans_a,ans_b,ans_c;
    ans_a = ans_no / co_deno;
    ans_b = abs(ans_no % co_deno);
    ans_c = abs(co_deno);
    if(ans_b == 0)
    ans_c = 1;
    printf("%d\n%d\n%d", ans_a,ans_b,ans_c);
}
void func_division(int a,int b, int c,int d,int e,int f,int g){
    int co_deno, no1, no2;
    int ans_deno, ans_no;
    no1 = a < 0 ? (-a) * c + b: a * c + b; no2 = e < 0 ? (-e) * g + f: e * g + f;
    no1 = a < 0 ? -no1 : no1;
    no2 = e < 0 ? -no2 : no2;
    co_deno = no2 * c;
    ans_no = no1 * g;
    int factor = func_factor(co_deno, ans_no);
    ans_no /= factor;
    co_deno /= factor;
    int ans_a,ans_b,ans_c;
    ans_a = ans_no / co_deno;
    ans_b = abs(ans_no % co_deno);
    ans_c = abs(co_deno);
    if(ans_b == 0)
    ans_c = 1;
    printf("%d\n%d\n%d", ans_a,ans_b,ans_c);
}