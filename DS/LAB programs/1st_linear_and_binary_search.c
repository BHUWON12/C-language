/* Linear and Binary search and also 
display its first occurrence */
#include<stdio.h>
#include<stdlib.h>
void liner_search(int list[],int n)
{
    int i,key,flag=0;
    printf("enter a elenement that you want to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(list[i]==key)
        {
            printf("element %d found at pos %d ",key,i+1);
          flag=1;  
          break;
          }
    }
    if(flag==0)
    {
        printf("the element that you want to search is not avilable in the list\n");
    }
}
void binary_search(int list[],int n)
{
    int i,key,high,low,mid;
    high=n-1;low=0;
    printf("enter a element that you want to search \n");
    scanf("%d",&key);
   while (low<=high)
    {
        mid=(high+low)/2;
        if(list[mid]==key)
        {
            printf("the element %d found at %d \n",list[mid],mid+1);
            break;
            i=1;
        }
        else if(key<list[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    if(i==1)
    {
        printf("the element is not there in list\n");
    }
    

}

int main()
{
    int a[20];
    int i,n;
    printf("enter the list size \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element\n");
        scanf("%d",&a[i]);
    }
        int ch;
   
    while(1)
    {
        printf("enter a choice \n1.linear search\n2.binary search\n3. exit\n");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            liner_search(a,n);
            break;
            case 2:
            binary_search(a,n);
            break;
            case 3:
            exit(0);
            default:
            printf("enter correct choice\n");
        }
    }
       

return 0;
}