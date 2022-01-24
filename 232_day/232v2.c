#include <stdio.h>
int main(){
    int year, day;
    int month, date;
    scanf("%d %d", &year, &day);
    int num_test;
    scanf("%d", &num_test);
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) )days[2]++;
    for (int i = 0; i < num_test; i++)
    {
        scanf("%d %d", &month, &date);
        if (month < 1 || month > 12) printf("-1\n");
        else if (date > days[month] || date < 1) printf("-2\n");
        else{
            for (int j = 1; j < month; j++) date+=days[j];
            date+=day-1;
            printf("%d\n", date % 7);
        }
    }
    return 0;
}