#include <stdio.h>
#define arrlen(x) (sizeof(x) / sizeof((x)[0]))

int main (){

    double prices[] = {5.0, 10.0, 20.0, 30.0};

    char name[][6] = {"HELLO", "WORLD"};

    printf (" %.2f\n", prices[0]);
    printf (" %.2f\n", prices[2]);
    printf (" %.2f\n", prices[arrlen(prices) - 1]);
    printf (" %s %s\n", name[0], name[1]);

    return 0;
}