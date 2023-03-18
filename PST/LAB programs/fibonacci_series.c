/*. to generate fibonacci series*/
#include<stdio.h>
int main()
{
int  n,t1=0,t2=1,i,next;
printf("enter the number till the times that you want to generate the fibonacci series\n");
scanf("%d",&n);
printf("the fibonacci series is bellow \n");
printf("%d\n%d\n",t1,t2);
for(i=2;i<n;i++)
{
    next=t1+t2;
    printf("%d\n",next);
    t1=t2;
    t2=next;
    
}
return 0;
}