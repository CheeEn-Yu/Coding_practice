#include <stdio.h>
#include <stdlib.h>
int value_3(int a, int b, int c, int x){
    int ans = x*x*x + a*x*x + b*x + c;
    return ans;
}
int value_2(int a, int b, int x){
    int ans = x*x + a*x + b;
    return ans;
}
int value_1(int a, int x){
    int ans = x + a;
    return ans;
}
int cmp(const void* p, const void* q){
	int A = * (int*)p;
	int B = * (int*)q;
	if(A == B) return 0;
	return A < B? -1 : 1;
}

int main(){
    int a,b,c,temp;
    int factor[3]={0};
    int index = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0){
        printf("0 0 0");
    }
    if (a != 0 && b == 0 && c == 0){
        temp = a>0 ? a : -a;
        for (int i = 1; i <= temp; i++){
            if (temp % i == 0 && value_1(a,i) == 0){
                factor[index] = -i;
                index++;
            }
            if (temp % i == 0 && value_1(a,-i) == 0){
                factor[index] = i;
                index++;
            }
        }
        qsort(factor, 3, sizeof(int), cmp);
        printf("%d %d %d", factor[0], factor[1], factor[2]);
    }
    if (a != 0 && b != 0 && c == 0){
        temp = b>0 ? b : -b;
        for (int i = 1; i <= temp; i++){
            if (temp % i == 0 && value_2(a,b,i) == 0){
                factor[index] = -i;
                index++;
            }
            if (temp % i == 0 && value_2(a,b,-i) == 0){
                factor[index] = i;
                index++;
            }
        }
        if (index == 2){
            qsort(factor, 3, sizeof(int), cmp);
            for(int i = 0; i < 2; i++)
                printf("%d ", factor[i]);
            printf("%d", factor[2]);
        }
        else if (index == 1){
            int root = a - (factor[0] + factor[1]);
            factor[2] = root;
            qsort(factor, 3, sizeof(int), cmp);
            printf("%d %d %d",factor[0], factor[1], factor[2]);
    }
    }
    if (c != 0){
        temp = c>0 ? c : -c;
        for (int i = 1; i <= temp; i++){
            if (temp % i == 0 && value_3(a,b,c,i) == 0){
                factor[index] = -i;
                index++;
            }
            if (temp % i == 0 && value_3(a,b,c,-i) == 0){
                factor[index] = i;
                index++;
            }
        }
        if (index == 3){
            qsort(factor, 3, sizeof(int), cmp);
            for(int i = 0; i < 2; i++)
                printf("%d ", factor[i]);
            printf("%d", factor[2]);
        }
        else if (index == 1){
            printf("%d %d %d", factor[0], factor[0], factor[0]);
        }
        else if (index == 2){
            int root = a - (factor[0] + factor[1]);
            factor[2] = root;
            qsort(factor, 3, sizeof(int), cmp);
            printf("%d %d %d",factor[0], factor[1], factor[2]);
    }
    }
    return 0;
}