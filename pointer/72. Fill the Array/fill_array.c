#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)//這函式是 qsort 所需的比較函式
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}               //傳回 -1 代表 a < b
      else if (c == d) {return 0;}      //傳回   0 代表 a = b
      else return 1;                          //傳回  1 代表 a>b
}

void fill_array(int *ptr[], int n){
    for (int i = 0 ; i < n; i++){
        *ptr[i] = i;
    }
    qsort(ptr,n,sizeof(ptr[0]),compare);
    // for (int i = 0; i < n; i++) printf("%d\n", *ptr[i]);
    // printf("%d\n", ptr[1] - ptr[0]);
    for (int i = 1; i < n; i++){
        for (int j = 1; j < ptr[i] - ptr[i-1]; j++)
        *(ptr[i-1] + j) = *ptr[i] + *ptr[i-1];
    }

}