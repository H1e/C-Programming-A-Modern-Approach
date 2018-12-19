#include <stdio.h>

int main(void) {

        int x; //declaration
        
        printf("Please, type a number to be calculated by the following polynomial:\n"); //initial user instructions
        scanf("%d", &x);
        
        printf("%d", 3 * (x * x * x * x * x) //polynomial sequence
        + 2 * (x * x * x * x)
        - 5 * (x * x * x)
        - (x * x)
        + (7 * x)
        - 6);
        
        return 0; //return value to terminate the program
}