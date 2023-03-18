/*to find factorial of a number*/
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the number to find factorial\n");
    scanf("%d",&n);
    while (n!=0)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial=%d",fact);
return 0;
}