#include <stdio.h>
#include <string.h>

int main (){

    char name[][20] = {"Robert", "Jarek", "Bob", "David"};

    strcpy(name[0], "Not Robert");
    printf("%s\n", name[0]);

    for (int i = 1; i < sizeof(name)/sizeof(name[0]); i++){
        printf("%s\n", name[i]);
    }

    return 0;
}