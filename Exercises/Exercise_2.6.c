#include <stdio.h>

int main(void) 
{
    int x; // declaration
    
    printf("Please input a number: "); // initilization of program
    scanf("%d", &x);
    
    printf("%d", ((((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6)); //shortened sequence of equations from poly.c
    return 0;  
}
