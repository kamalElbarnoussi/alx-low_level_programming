#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,separated by a comma followed by a space.
 * Return: Always 0.
 */


void print_fibonacci(int n);

int main() {
    print_fibonacci(50);
    printf("\n");
    return 0;
}

void print_fibonacci(int n) {
    int i, fib1 = 1, fib2 = 2;

    printf("%d, %d", fib1, fib2);

    for (i = 3; i <= n; i++) {
        int next_fib = fib1 + fib2;
        printf(", %d", next_fib);

        fib1 = fib2;
        fib2 = next_fib;
    }
}
