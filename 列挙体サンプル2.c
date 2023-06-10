/* ----------------------------------------------------------------------- */
/* ファイル名：c27-4.c                                                     */
/* 作　成　日：2021/12/14                                                  */
/* 作　成　者：0G04038　山本 弘樹                                          */
/* ----------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
/* メニューの設定 */
typedef enum {END, ADD, MOD, DEL} menu_t;


int main(void)
{
	menu_t menu;
	//展開するとこうなる
	//enum {END, ADD, MOD, DEL} menu;
	
	while ( 1 ) {
		printf("\n番号：メニュー\n");	// メニューの表示
		printf("---------------------\n");
		printf("  %d ：追加処理\n",       ADD);
		printf("  %d ：変更処理\n",       MOD);
		printf("  %d ：削除処理\n",       DEL);
		printf("  %d ：プログラム終了\n", END);
		printf("---------------------\n");
		printf("番号を入力してください：");
		scanf("%d", &menu);
		system("cls");  // コマンドプロンプトの画面をクリアするコマンド(cls)。Windows限定で、環境依存
		switch(menu){
			case ADD:
				printf("\n追加処理を実行\n");
				break;
			case MOD:
				printf("\n変更処理を実行\n");
				break;
			case DEL:
				printf("\n削除処理を実行\n");
				break;
			case END:
				printf("\nプログラムを終了します\n");
				return 0;
			default:
				printf("\n入力エラー\n");
		}
	}
}