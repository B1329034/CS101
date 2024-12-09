#include <stdio.h>
#include <math.h>
int main() {
    int input = 12345; // 輸入的整數
int swap_thousands_and_ones(int num) {
    int digits = log10(num) + 1; // 計算位數
    if (digits < 4) { // 如果少於4位數，用0補齊
        num *= pow(10, 4 - digits);
        digits = 4;
    }

    int ones = num % 10;                     // 提取個位數字
    int thousands = (num / 1000) % 10;       // 提取千位數字

    // 去掉千位和個位數字
    num -= thousands * 1000;                 // 去掉千位
    num -= ones;                             // 去掉個位

    // 交換數字並加回去
    num += ones * 1000;                      // 將個位數字加到千位
    num += thousands;                        // 將千位數字加到個位

    return num;
}
    // 執行交換
    int result = swap_thousands_and_ones(input);

    // 輸出結果
    printf("Original: %d, Swapped: %d\n", input, result);

    return 0;
}
