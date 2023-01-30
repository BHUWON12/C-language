#include<stdio.h>
#include<stdlib.h>
void linear_search(int a[],int n)
{ 
    int i,key,c=1;
    printf("enter the key that you want to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("the element %d is found at position %d",a[i],i);
            c=0;
            break;
        }
        if(c==0)
        {
            printf("the element not found in the list\n");

        }
        
    }
}
void binary_search(int a[],int n)
{
    int low=0,high=n-1,mid,key,f;
    printf("enter the key that you want to search\n");
    scanf("%d",&key);
    
     while(low<high)
    {
         mid=(low+high)/2;
         if(a[mid]==key)
        {   
            printf("the element %d found at position %d ",key,mid);
            f++;
            break;
        }
       else if(a[mid]>key)
        {
            high=mid-1;
        } 
       else
        {
            mid=(low+high)/2;
           high=mid+1;
        }
       if(f==0)
        {
            printf("element not found");
        }
       
    }
}
int main()
{
    int a[10],n,i,ch;
    printf("enter the list size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element\n");
        scanf("%d",&a[i]);
    }
    while(1)
    {
           printf("\n\n1.linear search\n2.binary search\n press any other number to exit!\n");
        printf("\nenter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            linear_search(a,n);
            break;
            case 2:
            binary_search(a,n);
            break;
            case 3:
            exit(0);
            default:
            printf("choice");            
        }

    }
}