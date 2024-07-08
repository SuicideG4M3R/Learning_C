#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp = 25;
    bool sunny = true;

    if (temp <= 0 || temp >= 30 || !sunny){
        printf("\nThe weather is bad!");
    } else {
        printf("\nThe weather is good!");
    }

    return 0;
}