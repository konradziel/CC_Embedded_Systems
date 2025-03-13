#include <stdio.h>
#include "ex_for.h"
#include "ex_while.h"
#include "gray_code.h"

int main(void) {
    int a = 4;
    printf("Double factorial of %d is %d", a, double_factorial(a));

    int b = 5;
    int c = 20;
    int d = 7;
    printf("\nSum of numbers divisible by %d between %d and %d is %d", d, b, c, sum_of_numbers_divided_by_k_in_range(b, c, d));

    product_of_numbers_of_number(125);

    int e = 10;
    printf("Binary of %d is %d", e, number_to_binary(e));

    const char* pesel = "0325010581";
    int control_number = calculate_pesel_control(pesel);
    printf("\nControl number of %s is %d", pesel, control_number);

    unsigned int f = 20;
    unsigned int g = 14;

    printf("\n%u in gray code is ", f);
    printBinary(decimal_to_gray(f));

    printf("\n");
    printBinary(decimal_to_gray(g));
    printf(" in decimal is %u", gray_to_decimal(decimal_to_gray(g)));
    return 0;
}
