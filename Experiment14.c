#include <stdio.h>

long findFactorial(int n);

int main() {
    int number;
    long fact;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        fact = findFactorial(number);
        printf("Factorial of %d = %ld\n", number, fact);
    }

    return 0;
}

long findFactorial(int n) {
    long result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}
