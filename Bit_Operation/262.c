#include <stdio.h>
int main(){
    int data;
    while (scanf("%d", &data) != EOF){
        int count = 0;
        while(data!=0){
            if(data%2) {
                count++;
            }
            data/=2;
        }
        printf("%d\n", count);
    }
    return 0;
}