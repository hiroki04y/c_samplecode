#include<stdio.h>

int main(void){
	int n, j, w;
	int a[5];
	
	//入力出力用添字
	int i;
	
	
	printf("配列を入力\n");
	
	//入力操作
	for(i = 0; i < 5; i++){
		printf("a[%d] : ",i);
		scanf("%d", &a[i]);
	}
	
	
	//挿入ソート
	for(n = 1; n < 5; n++){
		j = n;
		w = a[j];
		while(a[j - 1] > w && j > 0){
			a[j] = a[j - 1];
			j--;
		}
		a[j] = w;
	}
	
	
	//配列を出力
	printf("配列を出力\n");
	for(i = 0; i < 5; i++){
		printf("a[%d] : %d\n", i, a[i]);
	}
	
	return 0;
}