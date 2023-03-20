//Given {5,3,1,6,0,2,4} order the numbers in ascending order using Bubble Sort 
#include<stdio.h>
void bubble_sort(int list[],int n) 
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }}

    printf("the shorted list \n");
    for(i=0;i<n;i++)
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
    bubble_sort(a,n);

}