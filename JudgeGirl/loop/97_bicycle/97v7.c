#include <stdio.h>
#include <stdlib.h>
int abs(int num)
{
    num = num > 0 ? num : -num;
    return num;
}

int distance(int parking_x, int parking_y, int bike_x, int bike_y)
{
    int distance;
    distance = abs(parking_x - bike_x) + abs(bike_y - parking_y);
    return distance;
}

int cmp(const void *p, const void *q)
{
    int A = *(int *)p;
    int B = *(int *)q;
    if (A == B)
        return 0;
    return A < B ? -1 : 1;
}

int main()
{
    int num_parkinglot, num_illegal_bike;
    int parkx[10];
    int parky[10];
    int capacity[10];
    scanf("%d", &num_parkinglot);
    for (int i = 0; i < num_parkinglot; i++)
    {
        scanf("%d", &parkx[i]);
        scanf("%d", &parky[i]);
        scanf("%d", &capacity[i]);
    }
    int count_of_park[num_parkinglot];
    for (int j = 0; j < num_parkinglot; j++)
        count_of_park[j] = 0;
    scanf("%d", &num_illegal_bike);
    for (int i = 0; i < num_illegal_bike; i++)
    {
        int bikex, bikey;
        scanf("%d", &bikex);
        scanf("%d", &bikey);
        /*
        do num_parkinglot times
        if distance(bikex, bikey, parkx[i], parky[i]) is min
        and count_of_park < capacity[i]
        count_of_park[i]++
        */
        int record_distance[num_parkinglot];
        int sort_distance[num_parkinglot];
        for (int j = 0; j < num_parkinglot; j++)
            record_distance[j] = distance(bikex, bikey, parkx[j], parky[j]);
        for (int j = 0; j < num_parkinglot; j++)
            sort_distance[j] = record_distance[j];
        qsort(sort_distance, num_parkinglot, sizeof(int), cmp);
        /*
        for k in range(num_parkinglot)
        if record_distance[j] == sort_distance[k]
        and count[j] < capacity[j],
        #you may need to find all index that record_distance[j] == sort_distance[k]
        if parkx[j] is min in all record_distance[j] == sort_distance[k] 
        or parky[j] is min in all record_distance[j] == sort_distance[k]
        do count++
        */
        int index[10] = {0};
        for (int k = 0; k < num_parkinglot; k++)
        {
            int temp = 0;

            for (int j = 0; j < num_parkinglot; j++)
            {
                
                if ( (record_distance[j] == sort_distance[k] && sort_distance[k] != sort_distance[k+1]) && count_of_park[j] < capacity[j] )
                {
                    count_of_park[j]++;
                    temp = 1;
                }else if ( ((record_distance[j] == sort_distance[k] && sort_distance[k] == sort_distance[k+1]) && count_of_park[j] < capacity[j] ))
                {
                    
                }
                
            }
            
            if (temp == 1)
            {
                break;
            }
        }
    }
    // print answer, that is traverse the array of count_of_park
    for (int i = 0; i < num_parkinglot; i++)
        printf("%d\n", count_of_park[i]);

    return 0;
}