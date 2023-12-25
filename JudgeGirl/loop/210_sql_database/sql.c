#include<stdio.h>

typedef struct people
{
    char lastname[80];
    char firstname[80];
    char ID[80];
    int salary;
    int age;
} People;


int main(){
    int n;
    scanf("%d", &n);
    People input[n];
    for(int i = 0; i < n; i++){
        scanf("%s", &input[i].lastname);
        scanf("%s", &input[i].firstname);
        scanf("%s",&input[i].ID);
        scanf("%d",&input[i].salary);
        scanf("%d",&input[i].age);
    }
    int test;
    scanf("%d",&test);
    
    for(int i = 0; i < n; i++){
        printf("%s ", input[i].lastname);
        printf("%s ", input[i].firstname);
        printf("%s ",input[i].ID);
        printf("%d ",input[i].salary);
        printf("%d\n",input[i].age);
    }

    return 0;
}
/*4
Liu Pangfeng A123456789 80000 40
Wu Janet B123456789 79999 30
Liu Kevin C123456789 0 10
Liu Eric C123456789 0 7
2
select lastname firstname ID where salary > 1000
select firstname lastname salary lastname where lastname == Liu
*/