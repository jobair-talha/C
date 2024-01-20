#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, next_term;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib1);
        next_term = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_term;
    }
    printf("\n");
    return 0;
}
