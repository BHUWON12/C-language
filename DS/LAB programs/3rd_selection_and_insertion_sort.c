/*Perform the Insertion and Selection Sort on the input {75,8,1,16,48,3,7,0} 
and display the output in
descending order.*/
#include<stdio.h>

void selection_sort(int list[],int n)
{
     int i,j;
    int temp,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(list[min]>list[j])
            {
             temp=list[min];
             list[min]=list[j];
             list[j]=temp;

            }

        }
    }
    
    printf("the shorted list \n");
    for(i=0;i<n;i++)
    {
     printf("%d\t",list[i]);   
    }
}
/*insertion_sort(int list[],int n)
{
   
    
    
}*/

int main()
{
    int i;
    int a[20];
    int n;
    printf("enter the size of the list\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a element\n");
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
return 0;
}