#include <stdio.h>

int main()
{
    int volume;
    int r = 10;
    
    volume = (((((4.0f/3.0f) * 3.14) * r) * r) * r);    
    printf("%d", volume);
    return 0;
}