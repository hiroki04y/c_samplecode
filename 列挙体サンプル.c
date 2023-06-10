#include<stdio.h>

enum max {Male, Female};

void print_sex(enum max human){							//mainから渡された引数をenum(列挙体)と関連づける
	printf("\nhuman = %d\n", human);
	printf("Male = %d\n", Male);
	printf("Female = %d\n", Female);
	
	switch (human) {
		case Male :	 	printf("男");		break;
		case Female : 	printf("女");		break;
		default : 		printf("エラー"); break;
	}
}


int main(void){
	
	int a;
	
	printf("性別を入力してください");
	scanf("%d", &a);
	
	printf("あなたが選択した性別は");
	print_sex(a);
	printf("です");
	
	
	return 0;
}