#include <stdio.h>

int main(void)
{
    int fir, sec, thir, fou, fif, six, sev, eig, nin, ten, elev, twel, thirt, fourt, fift, sixt;
    int row1, row2, row3, row4;				// /\
    int col1, col2, col3, col4;				// || Stupid amount of variables
    int dia1, dia2;					// || in a single line
    
    printf("Enter the number from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &fir, &sec, &thir, &fou, &fif, &six, &sev, &eig, &nin, &ten, &elev, &twel, &thirt, &fourt, &fift, &sixt);
    
    printf("\n");
    
    printf("%d %d %d %d\n", fir, sec, thir, fou);	// prints the 16 numbers in a 4x4 grid
    printf("%d %d %d %d\n", fif, six, sev, eig);
    printf("%d %d %d %d\n", nin, ten, elev, twel);
    printf("%d %d %d %d\n", thirt, fourt, fift, sixt);
   
    printf("\n"); 
   
    row1 = fir + sec + thir + fou;			// Equations for the rows, columns, and diagonals
    row2 = fif + six + sev + eig;
    row3 = nin + ten + elev + twel;
    row4 = thirt + fourt + fift + sixt;
 
    col1 = fir + fif + nin + thirt;
    col2 = sec + six + ten + fourt;
    col3 = thir + sev + elev + fift;
    col4 = fou + eig + twel + sixt;
 
    dia1 = fir + six + elev + sixt;
    dia2 = fou + sev + ten + thirt;
 
    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);		// prints the summation of 
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);	// the rows, columns, and
    printf("Diagonal sums: %d %d\n", dia1, dia2);			// diagonals


    return 0;
}
