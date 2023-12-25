#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char string1[80];
        char string2[80];
        scanf("%s", string1);
        scanf("%s", string2);
        if(strcmp(string1, string2) == 0){
            printf("yes\n");
        }else if(strlen(string1) == strlen(string2)){
            int test = 0;
            for (int j = 0; j < strlen(string1); j++){
                char tmp;
                tmp = string1[j+1];
                string1[j+1] = string1[j];
                string1[j] = tmp;
                if(strcmp(string1,string2) == 0) {
                    printf("yes\n");
                    test = 1;
                    break;
                }
                else{
                    tmp = string1[j+1];
                    string1[j+1] = string1[j];
                    string1[j] = tmp;
                }
            }
            if (test == 0) printf("no\n");
        }
        else if(strlen(string1) - strlen(string2) == 1){
            int flag = 0;
            for (int j = 0; j < strlen(string1); j++){
                int tmp = 0; //record equality
                for (int x = 0, y = 0; x,y < strlen(string2); x++, y++){
                    if (x == j) x++;
                    if (string1[x] == string2[y]) tmp++;
                    
                }
                // printf("%d\n", tmp);
                if (tmp == strlen(string2)){
                    printf("yes\n");
                    flag = 1;
                    break;
                }
            }
            if(flag != 1) {
                printf("no\n");
            }
        }
        else if(strlen(string1) - strlen(string2) == -1){
            int flag = 0;
            for (int j = 0; j < strlen(string2); j++){
                int tmp = 0; //record equality
                for (int x = 0, y = 0; x,y < strlen(string1); x++, y++){
                    if (y == j) y++;
                    if (string1[x] == string2[y]) tmp++;
                    
                }
                // printf("%d\n", tmp);
                if (tmp == strlen(string1)){
                    printf("yes\n");
                    flag = 1;
                    break;
                }
            }
            if(flag != 1) {
                printf("no\n");
            }
        }
        else printf("no\n");
    }
    
    return 0;
}