#include<Stdio.h>
int main()
{
    int a[10],i,size;
    printf("enter the array size\n");
    scanf("%d",&size);
    printf("\nenter elements of array\n");
    for(i=0;i<size;i++)
    {
       printf ("enter the value\n"); 
       scanf("%d",&a[i]);
    }
    printf("\tthe given values are\n");
    for(i=0;i<size;i++)
    {
    printf("\nvalue= %d and the location is= %d",a[i],i);
    }
    return 0;

}
