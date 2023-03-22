/*Perform the Insertion and Selection Sort on the input {75,8,1,16,48,3,7,0} 
and display the output in
descending order.*/
#include<stdio.h>
#include<stdlib.h>

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
void insertion_sort(int list[],int n)
{
   for(int i=1;i<n;i++)
   { 
    int temp=list[i];
    int j=i-1;
    while(j>=0&&temp<list[j])
    {
        list[j+1]=list[j];
        j--;
    }
    list[j+1]=temp;
   }
     printf("the shorted list \n");
    for(int i=0;i<n;i++)
    {
     printf("%d\t",list[i]);   
    }
    
}

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
    while(1)
    {
    printf("\nenter choice\n1.selection short\n2.insertionshort\n\n3.exit\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
    selection_sort(a,n); break;
    case 2:
    insertion_sort(a,n);break;
    case 3:
    exit(0);
    }}
return 0;
}