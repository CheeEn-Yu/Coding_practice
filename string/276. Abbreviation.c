#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char in[127];
    while (scanf("%s", in)!=EOF){
        if (strcmp(in, "the") != 0 && strcmp(in, "of") != 0 && strcmp(in,"and") && strcmp(in, "at") &&
        strcmp(in, "the.") != 0 && strcmp(in, "of.") != 0 && strcmp(in,"and.") && strcmp(in, "at."))
            printf("%c", toupper(in[0]));
        if (in[strlen(in) - 1] == '.') printf("\n");

    }
    return 0;
}