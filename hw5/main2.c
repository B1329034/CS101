#include <stdio.h>
#include <math.h>

int main() {
    double PI = 4.0;    // 初始值
    double term;        // 每一項的值
    double currentPI = 0.0; // 計算的當前值
    int x = 0;          // 計算次數
    int sign = -1;      // 控制加減的符號
    
    for (x = 1; fabs(PI - currentPI) > 0.000005; x++) {
        term = 4.0 / (2.0 * x + 1.0);  // 計算每一項
        currentPI += sign * term;     // 累加或減去
        sign *= -1;                   // 反轉符號
    }

    printf("Minimum iterations to reach 3.14159 precision: %d\n", x);
    printf("Calculated PI: %.5f\n", currentPI);

    return 0;
}
