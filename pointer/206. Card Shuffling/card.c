#include <stdio.h>
#include "card.h"

void shuffle(int *deck[])
{
    if (deck[0] == NULL)
        return;
    int num = 0;
    while (deck[num] != NULL)
        num++;
    // printf("%d\n", num/2);
    int temp[10000];
    if (num % 2 == 0)
    {
        for (int j = 0, k = 0; j < num / 2; j++, k+=2)
        {
                temp[k] = *deck[j];
                temp[k + 1] = *deck[num / 2 + j];
        }
    }
    else
    {
        for (int j = 0, k = 0; j < num / 2; j++, k+=2)
        {
                temp[k] = *deck[j];
                temp[k + 1] = *deck[(num+1) / 2 + j];
        }
        temp[num-1] = *deck[num/2];
    }
    // for (int j = 0; j < num; j++)
    //     printf("%d\n", temp[j]);
    for (int j = 0; j < num; j++)
        *deck[j] = temp[j];
}

void print(int *deck[])
{
    if (deck[0] == NULL)
        return;
    int i = 0;
    while (deck[i] != NULL)
        i++;
    for (int j = 0; j < i - 1; j++)
        printf("%d ", *deck[j]);
    printf("%d", *deck[i - 1]);
}