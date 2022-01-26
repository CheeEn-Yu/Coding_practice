#include <stdio.h>
int main(){
    int year, month[13] = {0,1,2,3,4,5,6,7,8,9,11,12}, date[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, first_day;
    scanf("%d%d%d", &year,&month,&first_day);
    printf(" Su Mo Tu We Th Fr Sa\n");
    printf("=====================\n");
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) && month == 2)
        date[2]++;
    for (int i = 0; i < date[month]; i++){
        
    }

    printf("=====================");
    

    return 0;
}
