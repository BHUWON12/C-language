/*Write a program to insert the elements {61,16,8,27} into linear queue and delete three elements from the
list. Display your list after each insertion and deletion.*/
#include<stdio.h>
#include<stdlib.h>
# define max 5
struct queue
{
    int list[max];
    int front,rear;
}q;
void insertion()
{
    if(q.rear==max)
    {
        printf("the Q is full you cant enter any data on list\n");
    }
    else
    {
        int temp;
        printf("enter the data: ");
        scanf("%d",&temp);
        q.list[q.rear]=temp;
         q.rear++;

    }
}
void deletion()
{
    if(q.front==max)
    {
        printf("the Q is empty deletion is not possible\n");
    }
    else
    {
        int temp;
        temp=q.list[q.front];
        q.front++;
        printf("the deleted data: %d",temp);
    }
}
void printing()
{   if(q.front==max)
{
    printf("there is no data to print in Q\n");
}
else
{
    printf("the list of Q :\n|>>>\t");
    for(int i=q.front;i<q.rear;i++)
    {
        printf("[%d]\t",q.list[i]);
    }
    printf("<<<|");
}}
int main()
{
   q.front=q.rear=0;
     int ch;
    while(1)
    {
        printf("\nenter a choice \n1.Enqueue\n2.Dqueue\n3.display\n4.exit\n");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            printing();
            break;
            case 4:
            exit(0);
            default:
            printf("enter correct choice\n");
        }
    }
return 0;
}