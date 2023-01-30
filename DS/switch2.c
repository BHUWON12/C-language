#include<stdio.h>
int main()
{
    float a,b,add,sub,multi,div;
int ex;
printf("enter the values of a and b\n");
scanf("%f%f",&a,&b);
printf("enter your choice");
scanf("%d",&ex);
switch(ex)
{
    case 1:
    printf("you've selected addition of the numbers\n");
    add=a+b;
    printf("%f is add ition of two numbers",add);
    break;
    case 2:
    printf("you have selected subtraction of the numbers");
    sub=a-b;
    printf("subtraction of two numbers is =%f",sub);
    break;
    case 3:
    printf("you have selected multiplication of two numbers");
    multi=a*b;
    printf("multiplication of two numbers =%f",multi);
    break;
    case 4:
    printf("you have selected division of two numbers");
    div=a/b;
    printf("division of two   numbers is=%f",div);
    default:
    printf("you have selected wrong choice");

    }

return 0;
}