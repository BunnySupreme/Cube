#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sideLength = 0;
    int surfaceArea = 0;
    int volume = 0;
    printf(": ");
    scanf("%d", &sideLength);
    surfaceArea = 6*sideLength*sideLength;
    volume = sideLength*sideLength*sideLength;
    printf("Surface area: %d\n", surfaceArea);
    printf("Volume: %d", volume);
    return 0;
}
