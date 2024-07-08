#include <stdio.h>
#define arrlen(x) (sizeof(x) / sizeof((x)[0]))

int main (){

    double prices[] = {5.0, 10.0, 20.0, 30.0};

    // for(int i = 0; i < arrlen(prices); i++){
    //     printf("%.2lf\n", prices[i]);
    // }
    for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++){
        printf("%.2lf\n", prices[i]);
    }
    

    return 0;
}