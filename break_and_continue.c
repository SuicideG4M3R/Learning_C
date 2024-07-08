#include <stdio.h>

int main(){


    // continue = skip rest of the code, forces next iteration
    // break = breaks out of the loop/switch immediately

    for (int i = 0; i <= 20; i++){
        if (i == 17){
            printf("Breaking the loop...\n");
            break;
        }
        else if (i % 5 == 0){
            printf("SKIP %d\n", i);
            continue;
        }
        else if (i % 2 == 0){
            printf("Even: %d\n", i);
            continue;
        }
        printf("HEY %d\n", i);
        
    }
    
    return 0;
}