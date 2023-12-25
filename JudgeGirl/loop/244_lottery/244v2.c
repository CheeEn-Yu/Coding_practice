#include <stdio.h>

int main()
{
    int special_prize[3];
    int first_prize[3];
    int lottery;
    int sum = 0;
    int count = 0;
    int i, j;
    int check_digit = 10;
    for (i = 0; i < 3; i++)
        scanf("%d", &special_prize[i]);
    for (i = 0; i < 3; i++)
        scanf("%d", &first_prize[i]);
    while (scanf("%d", &lottery) != EOF)
    {
        for (i = 0; i < 3; i++)
        {
            if (lottery == special_prize[i]) sum += 2000000;
            for (j = 0, check_digit = 10, count = 0; j < 8; j++)
            {
                if (lottery % check_digit == first_prize[i] % check_digit)
                {
                    count++;
                    check_digit *= 10;
                }
                else{break;}
            }
            switch (count)
            {
            case 3:
                sum += 200;
                break;
            case 4:
                sum += 1000;
                break;
            case 5:
                sum += 4000;
                break;
            case 6:
                sum += 10000;
                break;
            case 7:
                sum += 40000;
                break;
            case 8:
                sum += 200000;
                break;
            default:
                break;
            }
        }
    }
    printf("%d", sum);
    return 0;
}