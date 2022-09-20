#include <stdio.h>
int main(){
    long long data;
    while (scanf("%lld", &data) != EOF){
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