#include<stdio.h>
int main()
{
int a[20];
int temp;
int i,j,n;
printf("enter the number of element you want to insert\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter element\n");
    scanf("%d",&a[i]);
}
printf("\nthe given arrray is\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("\n\nthe sorted arrray is\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

return 0;
}