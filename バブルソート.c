#include<stdio.h>

int main(void){
	int n, i, w;
	int a[5];
	
	
	printf("配列を入力\n");
	
	//入力操作
	for(i = 0; i < 5; i++){
		printf("a[%d] : ",i);
		scanf("%d", &a[i]);
	}
	
	
	//バブルソート
	for(n = 4; n >= 0; n--){
		for(i = 0; i < n; i++){
			if(a[i] > a[i + 1]){
				w = a[i];
				a[i] = a[i + 1];
				a[i + 1] = w;
			}
		}
	}
	
	
	//配列を出力
	printf("配列を出力\n");
	for(i = 0; i < 5; i++){
		printf("a[%d] : %d\n", i, a[i]);
	}
	
	return 0;
}