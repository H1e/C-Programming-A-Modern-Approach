#include <stdio.h>

int main(void)
{
    int num1, num2, num;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    num1 = num / 10;
    num2 = num % 10;
        
    printf("The reversal is: %d%d\n", num2, num1);
    
    return 0;
}
