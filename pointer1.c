#include<stdio.h>
int main()
{
int a=10,*ptr;
ptr=&a;
printf("%d\n",ptr);
printf("%d",*ptr);
printf("address of ptr %d",&ptr);
return 0;
}