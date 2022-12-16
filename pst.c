// create a program to print something using do while 

#include<stdio.h>
int main()
{
int i=1,x,fact=1;
printf("enter tne number\n");
scanf("%d",&x);
do
{
    fact=fact*i;
    i++;
}while(i<=x);
 printf("%d",fact);
return 0;
}