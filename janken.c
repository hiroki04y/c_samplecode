#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    int result;

    srand(time(NULL)); // 乱数のシードを初期化

    printf("じゃんけんゲーム\n");
    printf("1: グー, 2: チョキ, 3: パー\n");

    while (1) {
        // プレイヤーの手を入力
        printf("あなたの手を選んでください (1-3): ");
        scanf("%d", &player_choice);

        if (player_choice < 1 || player_choice > 3) {
            printf("無効な選択です。再度入力してください。\n");
            continue;
        }

        // コンピュータの手をランダムに生成
        computer_choice = rand() % 3 + 1;

        printf("コンピュータの手: %d\n", computer_choice);

        // 勝敗を判定
        if (player_choice == computer_choice) {
            result = 0; // 引き分け
        } else if (
            (player_choice == 1 && computer_choice == 2) ||
            (player_choice == 2 && computer_choice == 3) ||
            (player_choice == 3 && computer_choice == 1)
        ) {
            result = 1; // プレイヤーの勝ち
        } else {
            result = -1; // コンピュータの勝ち
        }

        // 結果を表示
        if (result == 0) {
            printf("引き分けです。\n");
        } else if (result == 1) {
            printf("あなたの勝ちです！\n");
        } else {
            printf("コンピュータの勝ちです。\n");
        }

        printf("\n");

        // ゲームを続けるかどうかを確認
        char play_again;
        printf("もう一度プレイしますか？ (y/n): ");
        scanf(" %c", &play_again);

        if (play_again != 'y' && play_again != 'Y') {
            break;
        }

        printf("\n");
    }

    printf("ゲームを終了します。\n");

    return 0;
}