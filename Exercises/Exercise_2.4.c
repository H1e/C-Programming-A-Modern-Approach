#include <stdio.h>

int main(void)
{
    float ui, total;
    float interest = 0.05f;
    
    printf("Please enter an amount of money: ");
    scanf("%f", &ui);
    
    total = ui + (ui * interest);
    
    printf("%.2f", total);
    
    return 0;
    
    
}
