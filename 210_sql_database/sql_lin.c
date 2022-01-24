 #define _CRT_SECURE_NO_WARNINGS
#define _Bool  bool
#define LAST_NAME 0
#define FIRST_NAME 1
#define GID 2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int ReadInt(int* x) {
    char c, neg;
    while ((c = getchar()) < '-') { if (c == EOF) return 0; }
    neg = (c == '-') ? -1 : 1;
    *x = (neg == 1) ? c - '0' : 0;
    while ((c = getchar()) >= '0')
        *x = (*x << 3) + (*x << 1) + c - '0';
    *x *= neg;
    return 1;
}
 
int ReadStr(char* s) {
    int len;
    char c;
 
    len = 0;
    s[len] = 0x00;
    c = getchar();
    while ((c != 0x0D) && (c != 0x0A) && (c != 0x20) && (c != EOF)) {
        s[len++] = c;
        s[len] = 0x00;
        c = getchar();
    }
    return len;
}
 
typedef struct data {
    char str_data[3][85];
    int salary, age;
}data;
 
typedef struct quest {
    char field[10][85];
    char condition_left[15];
    char op[5];
    char condition_right[85];
    int condition_value;
}quest;
 
/*int compare_salary(const void* a, const void* b) {
    data* arr1 = (data*)a;
    data* arr2 = (data*)b;
    int diff1 = arr1->salary - arr2->salary;
    if (diff1) return diff1;    
}
 
int compare_age(const void* a, const void* b) {
    data* arr1 = (data*)a;
    data* arr2 = (data*)b;
    int diff1 = arr1->age - arr2->age;
    if (diff1) return diff1;
}*/
 
data input_data[50];//500
quest input_quest;//2000
int total_field = 0;
 
void mydisplay(int da, int fi){
    if (input_quest.field[fi][0] == 'l')
        printf("%s", input_data[da].str_data[LAST_NAME]);
    else if (input_quest.field[fi][0] == 'f')
        printf("%s", input_data[da].str_data[FIRST_NAME]);
    else if (input_quest.field[fi][0] == 'I')
        printf("%s", input_data[da].str_data[GID]);
    else if (input_quest.field[fi][0] == 's')
        printf("%d", input_data[da].salary);
    else if (input_quest.field[fi][0] == 'a')
        printf("%d", input_data[da].age);
    if (fi != total_field - 1) printf(" ");
}
 
int main() {
    int total_data, total_quest, i, ret, da, fi;
    char select[20], temp[85];
 
    ReadInt(&total_data);
    for ( i = 0; i < total_data; i++){
        ReadStr(input_data[i].str_data[LAST_NAME]);
        ReadStr(input_data[i].str_data[FIRST_NAME]);
        ReadStr(input_data[i].str_data[GID]);
        ReadInt(&input_data[i].salary);
        ReadInt(&input_data[i].age);
    }
 
    ReadInt(&total_quest);
    for (int qu = 0; qu < total_quest; qu++) {
        ReadStr(select);
        while (1) {
            ReadStr(temp);
            if (strcmp(temp, "where") == 0) break;
            else     strcpy(input_quest.field[total_field], temp);
            total_field++;
        }
 
        ReadStr(input_quest.condition_left);
        ReadStr(input_quest.op);
 
        if (strcmp(input_quest.condition_left, "lastname") == 0) {
 
            ReadStr(input_quest.condition_right);
 
            if (strcmp(input_quest.op, "==") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[LAST_NAME], input_quest.condition_right) == 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, "!=") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[LAST_NAME], input_quest.condition_right) != 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
        }
        else if (strcmp(input_quest.condition_left, "firstname") == 0) {
            ReadStr(input_quest.condition_right);
 
            if (strcmp(input_quest.op, "==") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[FIRST_NAME], input_quest.condition_right) == 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, "!=") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[FIRST_NAME], input_quest.condition_right) != 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
        }
        else if (strcmp(input_quest.condition_left, "ID") == 0) {
            ReadStr(input_quest.condition_right);
 
            if (strcmp(input_quest.op, "==") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[GID], input_quest.condition_right) == 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, "!=") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (strcmp(input_data[da].str_data[GID], input_quest.condition_right) != 0) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
        }
        else if (strcmp(input_quest.condition_left, "salary") == 0) {
            ReadInt(&input_quest.condition_value);
 
            if (strcmp(input_quest.op, "==") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].salary == input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, ">") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].salary > input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, "<") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].salary < input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
        }
        else if (strcmp(input_quest.condition_left, "age") == 0) {
            ReadInt(&input_quest.condition_value);
 
            if (strcmp(input_quest.op, "==") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].age == input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, ">") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].age > input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
            else if (strcmp(input_quest.op, "<") == 0) {
                for ( da = 0; da < total_data; da++) {
                    if (input_data[da].age < input_quest.condition_value) {
                        for ( fi = 0; fi < total_field; fi++) {
                            mydisplay(da, fi);
                        }
                        printf("\n");
                    }
                }
            }
        }
        total_field = 0;
    }
}