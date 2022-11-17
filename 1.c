#include<stdio.h>
int main()
{
int a,b,i=0,show=0,n;
a=1;b=0;
printf("enter n");
scanf("%d",&n);
while(i<n)
{
show=a+b;
b=show;
printf("%d\n",show);
i++;
}
printf("the fiboncci series is\n");
return 0;
}