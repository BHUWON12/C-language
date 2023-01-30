#include<stdio.h>
int main()
{
int i,a[5],*p;
*p=a[5];
printf("enter the datas in array");
for(i=0;i<5;i++)
{
    printf("enter data\n");
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    printf("value;- %d\n",a[i]);
    printf("address of that value=%d\n",p);
    printf("\n");
}
return 0;
}