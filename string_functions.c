#include <stdio.h>
#include <string.h>

int main(){

    char strA[] = "Hello";
    char strB[] = "World";
    
    // strlwr(strA);                            // lowercase
    // strupr(strA);                            // uppercase
    // strcat(strA, strB);                      // appends strB to end of strA
    // strncat(strA, strB, 1);                  // appends n characters to strB to strA
    // strcpy(strA, strB);                      // copy strB to strA
    // strncpy(strA, strB, 1);                  // copy n characters of strB to strA

    // strset(strA, '?');                       // swaps all characters for given character
    // strnset(strA, 'x', 1);                   // swaps first n characters of string to given character
    // strrev(strA);                            // revereses a string
    
    // int result = strlen(strA);                  // returns lenght as int
    // int result = strcmp(strA, strB);            // compares all string characters
    // int result = strncmp(strA, strB, 1);        // compares n string characters
    // int result = strcmpi(strA, strB);           // compares all string characters (igonre case)
    // int result = strnicmp(strA, strB, 1);       // compares n string characters (igonre case)


    printf("%s\n", strA);
}