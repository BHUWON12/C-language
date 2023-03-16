/* prigram to read the radius of a circle and 
find area and circumference */
#include<stdio.h>
#define pi 3.14
int main()
{
    float r,a,c;
    printf("enter the radius of the circle\n");
    scanf("%f",&r);
    a=pi*r*r;
    c=2*pi*r;
    printf("the are of the circle is: %f\n",a);
    printf("circumference of the circle is: %f\n",c);
    
    return 0; 
    }