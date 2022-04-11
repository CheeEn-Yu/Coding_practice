#include <stdio.h>
#define MAXN 65536
int main(){
    char file_name[MAXN];
    scanf("%s", file_name);
    FILE *fp = fopen(file_name, rb);
    

    return 0;
}]