#include <stdio.h>
#include <ctype.h>
int main(){
    char s[101];
    scanf("%s", s);
    int ans[26] = {};
    for (int i = 0; s[i] != '\0'; i++){
        s[i] = toupper(s[i]);
        if (isupper(s[i])) ans[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}