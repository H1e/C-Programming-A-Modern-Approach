#include <stdio.h>

int main()
{
    int wind_speed;
    
    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_speed);
    
    if (wind_speed < 1) 
        printf("The speed of the wind is described to be a Calm.\n");
    else if (wind_speed >= 1 && wind_speed <= 3)
        printf("The speed of the wind is described to be a Light Air.\n");
    else if (wind_speed >= 4 && wind_speed <= 27)
        printf("The speed of the wind is described to be a Breeze.\n");
    else if (wind_speed >= 28 && wind_speed <= 47)
        printf("The speed of the wind is described to be a Gale.\n");
    else if (wind_speed >= 48 && wind_speed <= 63)
        printf("The speed of the wind is described to be a Storm.\n");
    else
        printf("The speed of the wind is described to be a Hurricane.\n"); 
            
    return 0;
}
