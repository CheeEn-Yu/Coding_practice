#include <stdio.h>

int main(){
    int special_prize[3];
    int first_prize[3];
    int lottery[2];
    int sum = 0;
    int count0 = 0, count1 = 0;
    int i, j, k;
    int check_digit = 10;
    for (i = 0; i < 3 ; i++)
        scanf("%d", &special_prize[i]);
    for (i = 0; i < 3; i++)
        scanf("%d", &first_prize[i]);
    for (i = 0; i < 2; i++)
        scanf("%d", &lottery[i]);
    //check the special_prize
    for (i=0; i < 3; i++){
        if (lottery[0] == special_prize[i]) sum+=2000000;
        if (lottery[1] == special_prize[i]) sum+=2000000;
    }
    for (i=0; i<3; i++){
        for (j=0, check_digit = 10, count0 = 0; j<8; j++){
            if (lottery[0]%check_digit == first_prize[i]%check_digit){
                count0++;
                check_digit *= 10;
            }else{ break;}
        }
        switch (count0)
        {
        case 3:
            sum+=200;
            break;
        case 4:
            sum+=1000;
            break;
        case 5:
            sum+=4000;
            break;
        case 6:
            sum+=10000;
            break;
        case 7:
            sum+=40000;
            break;
        case 8:
            sum+=200000;
            break;
        default:
            break;
        }
    }
    for (i=0; i<3; i++){
        for (j=0, check_digit = 10,count1 = 0; j<8; j++){
            if (lottery[1]%check_digit == first_prize[i]%check_digit){
                count1++;
                check_digit *= 10;
            }else {break;}
        }
        switch (count1)
        {
        case 3:
            sum+=200;
            break;
        case 4:
            sum+=1000;
            break;
        case 5:
            sum+=4000;
            break;
        case 6:
            sum+=10000;
            break;
        case 7:
            sum+=40000;
            break;
        case 8:
            sum+=200000;
            break;
        default:
            break;
        }
    }
    printf("%d", sum);
    return 0;
}