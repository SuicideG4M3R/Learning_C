#include <stdio.h>
#include <string.h>

int main() {
    
    long long int number = 0;
    long long int sum = 0;

    printf("\nEnter a number (0 to stop): \n\n");

    do{                                                            // While loop, chcek condition > executes
        printf("SUM: %lld\nEnter a number: ", sum);                // Do While loop, execute > chcek condition
        scanf("%lld", &number);
        sum += number;
    }while(number != 0);

    printf("Sum of all entered: %lld", sum);

    return 0;
}