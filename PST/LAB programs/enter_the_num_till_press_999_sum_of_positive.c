/*to read numbers from keyboard continuously till the user presses
999 and to find the sum of only positive numbers*/
#include<stdio.h>
int main()
{
int n;
int sum=0;
while(1)
{
    printf("enter the number\n");
    scanf("%d",&n);
    if(n==999)
    {
        break;
    }
    if(n>0)
    {
        sum=sum+n;
    }
}
printf("the sum of positive numbers is: %d",sum);
return 0;
}