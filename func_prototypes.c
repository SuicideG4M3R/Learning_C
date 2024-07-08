#include <stdio.h>

void hello(char[], int); // function prototype

int main(){
    
    char name[] = "Bob";
    int age = 25;

    hello(name);
    
    return 0;
}

void hello (char name[], int age){ // can write function after main function but it's not recommended
    printf("\nHello, %s! You are %d years old.\n", name, age);
}