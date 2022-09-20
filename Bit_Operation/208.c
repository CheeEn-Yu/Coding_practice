#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d\n", &n, &m);
    char no1,no0; // notation1, notation0
    scanf("%c %c\n", &no1, &no0);
    // printf("%c %c\n", no1, no0);
    unsigned int data;
    int countPrint = 0;
    int countRow = 0;
    while (scanf("%d", &data) != EOF){
        int temp[32] = {0};
        int i = 0;
        while(data!=0){
            temp[i] = data%2;
            data/=2;
            i++;
        }
        for (i = 31; i >= 0; i--){
            countPrint++;
            // printf("%d\n", countRow);
            if(countRow == n){
                printf("\n");
                countRow = 0;
            }
            countRow++;
            if(temp[i] == 1) printf("%c", no1);
            else if(temp[i] == 0)printf("%c", no0);
            if(countPrint == n*m) break;
        }
        // for (i = 31; i >= 0; i--){
        //     printf("%d", temp[i]);
        // }
        //     printf("\n");

    }
    
    
    
    return 0;
}