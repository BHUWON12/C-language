
//program all of functions in deletion

#include<Stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],i,x,n,pos,ch;
    printf("enter array size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the values of a\n");
        scanf("%d",&a[i]);
    }
    while(1)
    {
        printf("enter your choice\n");
      printf( "1.beggining\n 2.last\n3.postition\n4.display\n5.exit\n");
      scanf("%d",&ch);
switch(ch)
{
    case 1:
    x=a[i];
    printf("deleted data =%d",x);
    for(i=0;i<n;i++)
    {
        a[i-1]=a[i];n=n-1;
    }break;
    case 2:
x=a[n-1];
n=n-1;
printf("deleted data %d",x);
break;
case 3:
printf("enter the position\b");
scanf("%d",&pos);
x=a[pos-1];
printf("deleted value =%d",x);
for(i=pos;i<n;i++)
{a[i-1]=a[i];
}
case 4:
for(i=0;i<n;i++){

printf("values of a are%d\n",a[i]);

case 5:
exit(1);
default:
printf("enter the correct choice");
}}
return 0;

    }
