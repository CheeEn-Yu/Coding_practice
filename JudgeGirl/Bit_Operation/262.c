#include <stdio.h>
int main(){
    int data;
    while (scanf("%d", &data) != EOF){
        int count = 0;
        int max = -1;
        while(data!=0){
            if(data%2) {
                count++;
                if(count > max) max = count;
            }
            else{
                count = 0;
            }
            data/=2;
        }
        printf("%d\n", max);
    }
    return 0;
}