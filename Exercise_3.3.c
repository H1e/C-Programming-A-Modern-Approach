#include <stdio.h>

int main(void)
{
    int iSBN, gS1, groupIdent, publisherCode, itemNumber, checkDigit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gS1, &groupIdent, &publisherCode, &itemNumber, &checkDigit);
    
    printf("GS1 prefix: %d\n", gS1);
    printf("Group identifier:  %d\n", groupIdent);
    printf("Publisher Code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
    
    return 0;

}