#include <stdio.h>

#include <math.h>  // Include math library for sqrt() function

int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a child.\n");
        
    }

    return 0;
}