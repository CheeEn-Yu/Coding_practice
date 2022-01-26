#include <stdio.h>
int main(){
    int year, month, date[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, first_day;
    scanf("%d%d%d", &year,&month,&first_day);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) && month == 2)
        date[2]++;
    if (month > 13 || month < 1 || first_day > 7 || first_day < 0)
        printf("invalid");
    else{
        int width = 3 * first_day;
        printf(" Su Mo Tu We Th Fr Sa\n");
        printf("=====================\n");
        for (int i = 0; i < first_day; i++)
            printf("   ");
        for (int i = 1; i <= date[month]; i++){
            printf("%3d", i);
            width+=3;
            if (width == 21 && i != date[month]){
                width = 0;
                printf("\n");
            }
        }
        printf("\n=====================");
    }

    return 0;
}
