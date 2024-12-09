#include <stdio.h>
int main() {
    for (int i = 1; i <= 81; i++) { // 9x9 = 81 iterations
        int y = (i - 1) / 9 + 1;    // Calculate the row (1-9)
        int x = (i - 1) % 9 + 1;    // Calculate the column (1-9)
        printf("%d*%d=%d\t", y, x, y * x);
        if (x == 9) {               // Print newline after each row
            printf("\n");
        }
    }
    return 0;
}
