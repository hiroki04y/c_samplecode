#include <stdio.h>

int main(void){
	
	int itbl[3] = { 10, 20, 30};
	int *p_itbl;
	
	p_itbl = itbl;
	p_itbl = &itbl[0];	//同じ意味になる											//itblの先頭アドレス（itbl[0]）を設定
	
	/* 様々な表示パターンがある*/
	
	//パターン１
	printf("パターン１\n");
	for(int i = 0; i < 3; i++){
		printf("itbl[%d] = %d\n", i, p_itbl[i]);
	}
	
	//パターン２
	printf("パターン２\n");
	for(int i = 0; i < 3; i++){
		printf("itbl[%d] = %d\n", i, *(p_itbl + i));
	}
	
	//パターン３
	printf("パターン３\n");
	for(int i = 0; i < 3; i++){
		printf("itbl[%d] = %d\n", i, *p_itbl++);
	}


	return 0;
}