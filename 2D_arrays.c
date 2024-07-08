#include <stdio.h>
#define arrlen(x) (sizeof(x) / sizeof((x)[0]))


int main (){
    
    /*
    int numbers[4][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    ...
            OR

    */

    int numbers[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        };

    int rows = arrlen(numbers);
    int columns = arrlen(numbers[0]);

    for (int i=0; i < rows; i++){

        for (int j=0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }

        printf("\n"); // print new line after each row
    }

    return 0;
}