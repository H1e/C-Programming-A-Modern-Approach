#include <stdio.h>

#define TWENTY  20	// DEFINITION of CONSTANTS
#define TEN  10		 
#define FIVE  5		 
#define ONE  1 	

int main(void) 
{
    int dollars; // declaration of variable dollars
    
    printf("Please input a value: "); //initilization of program
    scanf("%d", &dollars); 
    
    printf("$20 bills: %d\n", dollars / TWENTY); // prints twenty dollar bills
    dollars = dollars % TWENTY; //recreates the value of dollars
    
    printf("$10 bills: %d\n", dollars / TEN); // prints ten dollar bills
    dollars = dollars % TEN; // recreates the value of dollars
    
    printf("$5 bills: %d\n", dollars /  FIVE); // prints five dollar bills
    dollars = dollars % FIVE; // recreates the value of dollars
    
    printf("$1 bills: %d\n", dollars / ONE); //prints one dollar bills
    
    return 0;    // termination of program
     
}
