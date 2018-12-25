#include <stdio.h>

int main(void)
{
    int num;
    int dig;
    
    printf("Enter a number between 0, and 9999: ");
    scanf("%d", &num);
    
    if (0 <= num && num <= 9)
        dig = 1;
    else if (10 <= num && num <= 99)
        dig = 2;
    else if (100 <= num && num <= 999)
        dig = 3;
    else if (1000 <= num && num <= 9999)
        dig = 4;
    else 
        dig = 0;
    
    printf("The number %d", num);
    printf(" has %d", dig);
    if (dig == 1)
        printf(" digit.\n");
    else 
        printf(" digits.\n");
    
    return 0;
}