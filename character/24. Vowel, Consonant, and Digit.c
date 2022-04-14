#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int ans[4] = {};
    for (int i = 0; i < n; i++){
        if(isdigit(s[i])) ans[0]++;
        if(isalpha(s[i])){
            ans[1]++;
            int powel = (s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' ||  s[i] == 'E' ||  s[i] =='I' ||  s[i] == 'O' ||  s[i] == 'U');
            if(powel) ans[2]++;
            if(!powel) ans[3]++;
        }
    }
    for (int i = 0; i < 3; i++) 
        printf("%d ", ans[i]);
    printf("%d", ans[3]);
    return 0;
}