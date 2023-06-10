#include<stdio.h>

int main(void){
	int i, j, min, w;
	int a[5];
	
	
	//入力操作
	for(i = 0; i < 5; i++){
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	
	//配列ソート
	for(i = 0; i < 4; i++){
		min = i;
		for(j = i + 1; j < 5; j++){
			if(a[min] > a[j])
				min = j;
		}
		if(min != i){
			w = a[i];
			a[i] = a[min];
			a[min] = w;
		}
	}
	//出力
	printf("並べ替え後\n");
	for(i = 0; i < 5; i++){
		printf("a[%d] : %d\n", i, a[i]);
	}
	
	return 0;
}
		