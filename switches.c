#include <stdio.h>
#include <ctype.h>

int main(){
    
    char grade;

    printf("Enter your grade (A, B, C, D, F): \n");
    scanf("%c",&grade);
    grade = toupper(grade);
    

    switch (grade)
    {
    case 'A':
        printf("Suuuuuper!\n");
        break;
    
    case 'B':
        printf("Good job!\n");
        break;

    case 'C':
        printf("Okay!\n");
        break;

    case 'D':
        printf("You need to work harder!\n");
        break;

    case 'F':
        printf("You failed!\n");
        break;

    default:
        printf("Invalid grade!\n");
        break;
    }

    return 0;
}