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
	int illx[100000];
	int illy[100000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &parkx[i]);
		scanf("%d", &parky[i]);
		scanf("%d", &capacity[i]);
	}
	scanf("%d", &m);	
	for(int i = 0; i < m; i++){
		scanf("%d", &illx[i]);
		scanf("%d", &illy[i]);
	}
	
	int ans[n];
	for(int i = 0; i < n; i++){
		ans[i] = 0;
	}
	for(int i = 0; i < m; i++){
		int temp = 0;
		int storedistance[n];
		for(int j = 0; j < n; j++)
			storedistance[j] = abs(parkx[j] - illx[i]) + abs(parky[j] - illy[i]);
		qsort(storedistance, n, sizeof(int), cmp);
		for(int a = 0; a < n; a++){
			if(abs(parkx[a] - illx[i]) + abs(parky[a] - illy[i]) == storedistance[0]){
				if(ans[a] < capacity[a]){
					ans[a]++;
					break;
				}
			}else{for(int k = 1; k < n; k++){
			if(abs(parkx[a] - illx[i]) + abs(parky[a] - illy[i]) == storedistance[k]){
				if(ans[a] < capacity[a]) {ans[a]++;}
			}
			}
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d\n", ans[i]);
	}
	return 0;
}
