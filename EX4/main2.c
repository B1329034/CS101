#include <stdio.h>
#include <math.h>

int main() {
    double PI = 4.0;    
    double term;        
    double currentPI = 0.0; 
    int x = 0;          
    int sign = -1;      
    
    for (x = 1; fabs(PI - currentPI) > 0.000005; x++) {
        term = 4.0 / (2.0 * x + 1.0);  
        currentPI += sign * term;     
        sign *= -1;                   
    }

    printf("Minimum iterations to reach 3.14159 precision: %d\n", x);
    printf("Calculated PI: %.5f\n", currentPI);

    return 0;
}
