#include<stdio.h>
#include<string.h>
#define STRINGLEN 80
int main(){
    char source[40] = "This is a string.";
    char dest[4];
    printf("strlen(source) = %1u\n", strlen(source));
    strncat(dest, source, 3);
    dest[3] = '\0';
    printf("source <%s>\n", source);
    printf("dest <%s>\n", dest);
    
    return 0;
}