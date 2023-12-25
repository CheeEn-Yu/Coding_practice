#include <stdio.h>
int main()
{
    int year, day;
    int num_test;
    scanf("%d %d", &year, &day);
    scanf("%d", &num_test);
    for (int i = 0; i < num_test; i++)
    {
        int month, date;
        scanf("%d %d", &month, &date);
        if (month < 1 || month > 12)
        {
            printf("-1\n");
            continue;
        }
        int leap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
        if (leap)
        {
            if ( (month == 2) && (date > 29 || date < 1) ){
                printf("-2\n");
                continue;
            }
            else if ( (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (date > 31 || date < 1) )
            {
                printf("-2\n");

                continue;
            }
            else if ( (month == 4 || month ==  6 || month ==  9 || month ==  11) && (date > 30 || date < 0) )
            {    
                printf("-2\n");
                continue;
            }
        }
        else
        {
            if ( (month == 2) && (date > 28 || date < 1) ){
                printf("-2\n");
                continue;
            }
            else if ( (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (date > 31 || date < 1) )
            {
                printf("-2\n");
                continue;
            }    
            else if ( (month == 4 || month ==  6 || month ==  9 || month ==  11) && (date > 30 || date < 0) )
            {
                printf("-2\n");
                continue;
            }
        }
        
        
        printf("%d\n", w);
    }
    return 0;
}