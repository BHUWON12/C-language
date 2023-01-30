#include <stdio.h>
void main()
{
    int r ;
    float area, circumfrance;
    printf("enter the value of r");
    scanf("%f",&r);
    area=3.142*r*r;
    circumfrance = 2*3.142*r*r;
    printf("area=%f", area);
    printf("circumfrance=%f", circumfrance);
}