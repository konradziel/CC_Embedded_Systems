#include "ex_for.h"

int double_factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i * 2;
    }
    return result;
}

int sum_of_numbers_divided_by_k_in_range(int start, int end, int k) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }
    return sum;
}