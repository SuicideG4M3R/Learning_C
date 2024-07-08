#include <stdio.h>

int findMax(int x, int y){
    return (x > y)? x : y;
}

int main(){
    
    int max = findMax(3, 4);

    printf("The maximum number is: %d\n", max);

    return 0;
}