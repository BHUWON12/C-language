/*to check whether the number is prime or not*/
#include<stdio.h>
int main()
{
int n,c=2,i;
printf("enter a number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
    c--;
    }
} 
if(c==0)
{
    printf("N is a prime number\n");
}
else
{
printf("N is not a prime number\n");
}
return 0;
}