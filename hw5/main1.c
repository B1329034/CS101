#include <stdio.h>

int main() {
    int n = 7;  // 設定金字塔的行數為7

    for (int i = 1; i <= n; i++) {
        // 打印每層的空格，保持數字對齊
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 打印該層的數字，數字等於層數，並且每層數字個數等於層數
        for (int k = 1; k <= i; k++) {
            printf("%d", i);  // 打印當前層數的數字
            if (k < i) {  // 如果不是當層的最後一個數字，後面加一個空格
                printf(" ");
            }
        }

        // 換行，進入下一層
        printf("\n");
    }

    return 0;
}  
