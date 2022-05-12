#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char s[100];
    while (scanf("%s", s) != EOF){
        printf("%s", s);
        int n = strlen(s);
        if (isspace(s[n-1])) s[n-1] = '\n';
    }
    
    return 0;
}