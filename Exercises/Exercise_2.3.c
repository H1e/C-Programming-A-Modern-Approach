#include <stdio.h>

int main()
{
    int volume;
    int r;
    
    printf("Please input a number to know the radius of that said number: ");
    scanf("%d", &r);
    volume = (((((4.0f/3.0f) * 3.14) * r) * r) * r);
    printf("%d\n", volume);
    return 0;
}

