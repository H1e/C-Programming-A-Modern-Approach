#include <stdio.h>

int main(void)
{
    int num, num1, numb1, num2, numb2, num3, numb3, num4,numb4, num5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    
    num1 = num % 8;
    numb1 = num / 8;
    num2 = numb1 % 8;
    numb2 = numb1 / 8;
    num3 = numb2 % 8;
    numb3 = numb2 / 8;
    num4 = numb3 % 8;
    numb4 = numb3 / 8;
    num5 = numb4 % 8;
            
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", num5, num4, num3, num2, num1);
    
    return 0;
}
