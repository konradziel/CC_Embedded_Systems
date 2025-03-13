#include <stdio.h>
#include "gray_code.h"

unsigned int decimal_to_gray(unsigned int n) {
    return n ^ (n >> 1);
}

unsigned int gray_to_decimal(unsigned int n) {
    int m = n;
    while (m) {
        m >>= 1;
        n ^= m;
    }
    return n;
}

void printBinary(unsigned int n){
    if (n > 1) {
        printBinary(n >> 1);
    }
    printf("%d", n & 1);
}