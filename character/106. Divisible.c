#include <stdio.h>
#include <string.h>
int main(){
    char in[1000];
    while (scanf("%s", in) != EOF){
        if (in[0] == '-') break;
        int n = strlen(in);
        // 2
        if(!((in[n-1] - '0') % 2))  printf("yes ");
        else printf("no ");
        // 3
        int sum = 0;
        for (int i = 0; i < n; i++) sum += in[i] - '0';
        if (sum % 3 == 0) printf("yes ");
        else printf("no ");
        // 5
        if(in[n-1] == '5' || in[n-1] == '0')  printf("yes ");
        else printf("no ");
        // 11
        int odd_sum = 0;
        int even_sum = 0;
        for (int i = n-1; i >= 0; i-=2) odd_sum += in[i] - '0';
        for (int i = n-2; i >= 0; i-=2) even_sum += in[i] - '0';
        // printf("%d\n", odd_sum);
        // printf("%d\n", even_sum);
        if ((odd_sum - even_sum) % 11 == 0) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}