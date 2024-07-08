#include <stdio.h>

int main(){
    char operator;
    double num1, num2, result;

    printf("Enter first number: \n");
    scanf("%lf",&num1);

    printf("Enter an arithmetic operator [ + , - , * , / ]: \n");
    scanf(" %c",&operator);

    printf("Enter second number: \n");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2!= 0){
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator. Please enter a valid operator (+, -, *, /).");
            return 1;
    }
    if (result) {
        printf(" %.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
    }

    return 0;
}
