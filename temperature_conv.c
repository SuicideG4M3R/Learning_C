#include <stdio.h>
#include <ctype.h>

int main(){
    
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?\n");
    scanf("%c",&unit);
    unit = toupper(unit);

    if (unit == 'F'){
        printf("\nEnter the temperature in Farentheit!\n");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is %.1f", temp);

    } else if (unit == 'C'){
        printf("\nEnter the temperature in Celsius!\n");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farentheit is: %.1f", temp);


    } else {
        printf("\n %c is not a valid unit", unit);
    }
    

    return 0;
}