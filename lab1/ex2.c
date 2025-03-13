#include <stdio.h>
#include "ex2.h"

int suma (int a, int b) {
    return a+b;
}

void czy_dodatnia(int liczba) {
    if(liczba>0) {
        printf("\n Podana liczba jest dodatnia");
    }else {
        printf("\n Podana liczba jest ujemna");
    }
}

int sumuj_tablice(int tab[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += tab[i];
    }
    return sum;
}

void kalkulator(int a, int b, char decyzja) {
    switch(decyzja){
        case '+':
            printf("\n Wynik dodawania z kalkulatora: %d", a+b);
        break;
        case '-':
            printf("\n Wynik odejmowania z kalkulatora: %d", a-b);
        break;
        case '*':
            printf("\n Wynik mnozenia z kalkulatora: %d", a*b);
        break;
        case '/':
            printf("\n Wynik dzielenia z kalkulatora: %d", a/b);
        break;
        default:
            printf("\n Nieznana operacja.");
    }
}