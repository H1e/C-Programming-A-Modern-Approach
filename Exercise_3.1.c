#include <stdio.h>

int main(void)
{
    int day, month, year;			// Declaration of variables
        
    printf("Enter a date (mm/dd/yyyy): ");	//Asks to enter a date to be converted into one line text
    scanf("%d/%d/%d", &day, &month, &year);	//User input of the date, w/ brackets
    
    printf("%d%.2d%.2d\n", year, month, day);	 //prints the year, month, and day in one line
    
    return 0; 
}