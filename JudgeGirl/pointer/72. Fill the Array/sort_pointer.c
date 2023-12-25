#include <stdio.h>
int main(){
    int arr[3] = {1,2,3};
    int *ptr = arr;
    int *ptr2 = arr +1;
    printf("%p\n%p\n", ptr, ptr2);
    printf("%d", ptr < ptr2);
    
    return 0;
}