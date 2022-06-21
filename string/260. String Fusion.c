#include <stdio.h>
#include <string.h>
int main(){
    char ans[128] = "";
    char in[128] = "";
    while (scanf("%s", in) != EOF){
        int l = strlen(ans);
        int i;
        for (i = 0; i < l; i++)
        {
            if (strncmp(&ans[i], in, l - i) == 0) break;
        }
        strcpy(&(ans[i]),in);
    }
    printf("%s\n", ans);

    return 0;
}