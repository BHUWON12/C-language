#include<stdio.h>
int main()
{
 int a[20],temp,j,i,n,min;
 printf("enter th size\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("enter data\n");
    scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        {
            min=j;
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        }
    
    }
    
 }
 printf("the elements are\n\n");
 for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }
return 0;
}