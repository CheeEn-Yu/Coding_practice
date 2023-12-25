#include <stdio.h>
int main(){
    int arr[3]={1,2,3};
    int *ptr1 = arr;
    printf("%d", *(ptr1+2));

    
    return 0;
}