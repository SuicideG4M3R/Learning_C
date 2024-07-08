#include <stdio.h>

double square(double x){
    return x * x;
}

int main(){
    double num = 3.14;
    double result = square(3.14);
    printf("Square of %.2lf is: %.2lf\n",num , result);
    return 0;
}