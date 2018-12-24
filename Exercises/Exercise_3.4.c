#include <stdio.h>

int main(void)
{
    int phoneNum1, phoneNum2, phoneNum3; 
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phoneNum1, &phoneNum2, &phoneNum3); //	asks the user and records the phone
                                                             // number
    printf("You entered: %d.%d.%d\n", phoneNum1, phoneNum2, phoneNum3); //prints the phone number by
                                                                        //the given format
    
    return 0; 
}
