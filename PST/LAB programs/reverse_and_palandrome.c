/*to read a number, find the sum of the digits, reverse the number and
check it for palindrome*/
#include<stdio.h>
int main()
{
int n,i,rem,rev=0,oreg;
printf("enter a number \n");
scanf("%d",&n);
oreg=n;
while (n!=0)
{   rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("the reverse of the number N %d\n",rev);
if(rev==oreg)
{
    printf("N is palandrome number\n"); 
}
else
{
    printf("N is not palandrome number\n");
}
return 0;
}