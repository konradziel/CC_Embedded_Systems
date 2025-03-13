#include <stdio.h>
#include "ex_for.h"

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int sum_even_numbers_in_range(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

void multiplaying_table_for_number(int n) {
    printf("\nMultiplaying table for number %d:", n);
    for (int i = 1; i <= 10; i++) {
        printf("\n%d * %d = %d", n, i, n * i);
    }
}


