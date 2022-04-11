#include<stdio.h>
#include<stdlib.h>
int abs(int num){
	num = num > 0? num :-num;
	return num;
}

int cmp(const void* p, const void* q){
	int A = * (int*)p;
	int B = * (int*)q;
	if(A == B) return 0;
	return A < B? -1 : 1;
}
int main(){
	int n,m;
	int parkx[10];
	int parky[10];
	int capacity[10];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &parkx[i]);
		scanf("%d", &parky[i]);
		scanf("%d", &capacity[i]);
	}
	scanf("%d", &m);
    int storenow[n];
    for (int i = 0; i < n; i++){
        storenow[i] = 0;
    }
    
    for(int i = 0; i < m; i++){
	    int illx, illy;
        scanf("%d %d", &illx, &illy);
        int mind = abs(parkx[j] - illx) + abs(parky[j] - illy);
        for(int k = 0; k < n; k++){
			int temp = 0;
            for(int j = 0; j < n; j++){
                if(abs(parkx[j] - illx) + abs(parky[j] - illy) == storedistance[k] && storenow[j] < capacity[j]){
					storenow[j]++;
					temp = storenow[j];
					break;
				}
            }
			if(temp != 0) break;
        }
    }
	for(int i = 0; i < n; i++){
		printf("%d\n", storenow[i]);
	}
	return 0;
}
