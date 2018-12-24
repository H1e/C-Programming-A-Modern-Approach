#include <stdio.h>

int main(void) 
{
    float loan, rate, month;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    
    printf("Enter monthly payment: ");
    scanf("%f", &month);
    
    rate = ((rate / 100) / 12);
    
    loan = ((loan - month) + loan * rate); 
    
    printf("Balance remaining after first payment: %.2f\n", loan);
    loan = ((loan - month) + loan * rate);
    
    printf("Balance remaining after second payment: %.2f\n", loan);
    loan = ((loan - month) + loan * rate);
    
    printf("Balance remaining after third payment: %.2f\n", loan); 
    
    return 0;
}
