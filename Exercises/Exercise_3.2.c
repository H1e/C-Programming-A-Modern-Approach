#include <stdio.h>

int main(void) 
{
    int itnum, day, month, year, purchaseDate ;
    float unprice;
    
    printf("Enter item number: ");
    scanf("%d", &itnum);
    
    printf("Enter unit price: ");
    scanf("%f", &unprice);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item		 Unit		Purchase\n");
    printf("		 Price		Date\n");
    printf("%d		$ %.2f		%d/%d/%d\n", itnum, unprice, month, day, year);
    
    return 0;     
}
