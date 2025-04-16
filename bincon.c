#include<stdio.h>

void main() {
    double n, r = 0, bin = 0, p = 1;
    
    // Prompting user for input
    printf("Enter the value of n: \n");
    scanf("%lf", &n);

    // Decimal to binary conversion
    while (n != 0) {
        r = (int)n % 2;  // Modulo 2 to get remainder (0 or 1)
        n = (int)n / 2;  // Dividing the number by 2
        bin = bin + (r * p);  // Building the binary number
        p = p * 10;  // Moving to next binary place
    }

    // Printing the binary equivalent
    printf("Binary equivalent: %.0lf\n", bin);
}

