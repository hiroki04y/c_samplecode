#include <stdio.h>

int main(void){
	
	int n1 = 10;
	int *p;
	
	p = &n1;
	
	printf("%d\n", p);		//pはn1のアドレス
	printf("%d\n", *p);		//*pはn1の内容

	return 0;
}