#include <stdio.h>

int main(){
    
    int rows;
    int columns;
    char symbol;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    printf("Enter the symbol to be used: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            printf("%c", symbol);
        }
        printf("\n");  // Move to the next line after printing the row
    }
    
    return 0;
}