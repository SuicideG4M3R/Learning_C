#include <stdio.h>
#include <string.h>

int main() {
    
    char name[25];

    printf("\nEnter your full name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("Name cannot be empty. \nPlease enter your full name: \n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }


    printf("\nHello %s", name);

    return 0;
}