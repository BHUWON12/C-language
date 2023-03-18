/*to remove Duplicate Element in a single dimensional Array*/
#include<stdio.h>
int main()
{
    int a[10],n;
    int i,j,k;
    int temp;
    printf("Enter the sidze of the list\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                    j--;
                     n--;
            }
        }
    }
    printf("The list is bellow \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}