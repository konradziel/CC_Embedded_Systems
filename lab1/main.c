#include <stdio.h>
#include "ex2.h"
#include "ex_for.h"
#include "ex_while.h"
#include "ex_do_while.h"

int main()
{
    int a =10;
    double b = 3.14;
    char c = 'A';
    int d = 5;

    printf("\nint: %d, double: %.2f, char: %c",a ,b, c);

    double sum = a+b;
    printf("\nSum: %.2f", sum);

    int suma2 = suma(a,d);
    printf("\nSuma: %d", suma2);
    czy_dodatnia(a);

    int tablica[4] = {1,2,3,4};
    int size = sizeof(tablica) / sizeof(tablica[0]);
    int wynik = sumuj_tablice(tablica, size);
    printf("\nSuma tablicy: %d", wynik);

    kalkulator(10, 12, '+');
    kalkulator(10, 12,'hello');

    int e = 4;
    int fac = factorial(e);
    printf("\nFactorial of %d: %d", e, fac);

    int start = 2;
    int end = 12;
    int result = sum_even_numbers_in_range(start, end);
    printf("\nSum of even numbers in range %d to %d: %d", start, end, result);

    int multiply = 5;
    multiplaying_table_for_number(multiply);

    int first_while = 257;
    printf("\nSum of numbers of number %d: %d", first_while, sum_numbers_of_number(first_while));

    int second_while = 7312;
    printf("\nReversing number %d: %d", second_while, reverse_number(second_while));

    ex1();
    printf("\n%d", is_palindrome("radar"));
    play_guessing_game();

    return 0;
}

