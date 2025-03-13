#include <stdio.h>
#include <math.h>
#include "ex_while.h"

void product_of_numbers_of_number(int n) {
    int product = 1;
    int number = n;
    while (n>0) {
        product *= n%10;
        n /= 10;
    }
    product = abs(product);
    printf("\nProduct of numbers of %d is %d\n", number, product);
}

int number_to_binary(int n) {
    int binary = 0;
    int i = 0;
    while (n>0) {
        binary += (n%2)*pow(10, i);
        n /= 2;
        i++;
    }
    return binary;
}

int calculate_pesel_control(const char* pesel) {
    int weights[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int sum = 0;
    int i = 0;

    while (i < 10) {
        int digit = pesel[i] - '0';
        int product = digit * weights[i];
        sum += product % 10;
        i++;
    }

    sum = sum % 10;

    return (10 - sum) % 10;
}