/*Write a program to insert the elements {61,16,8,27} into linear queue and delete three elements from the
list. Display your list after each insertion and deletion.*/
#include<stdio.h>
#include<stdlib.h>
# define max 5
struct queue
{
    int list[max];
}q;
 int front,rear;
void insertion()
{
    if(rear==-1 && front==-1)
    {
        front=0;
        rear=0;
         printf("enter data:");
        scanf("%d",&q.list[rear]);

    }
   else if((rear+1)%max==front)
    {
        printf("the CQ is full\n");
    }
    else
    {
        rear=(rear+1)%max;
        printf("enter data:");
        scanf("%d",&q.list[rear]);
        
    }

}
void deletion()
{
    if(rear==-1 && front==-1)
    {
        printf("the CQ is empty\n");
    }
    else
    {
        int temp;
        temp=q.list[front];
        printf("the deleted data: [%d]",temp);
        front=(front+1)%max;
    }

}
void printing()

{
    int i=front;
     if(front==-1 && rear==-1)
{
    printf("there is no data to print in Q\n");
}
else
{
    printf("the list of Q :\n|>>>\t");
   while(i<rear)
   {
        printf("[%d]\t",q.list[i]);
        i=(i+1)%max;
    }
    printf("<<<|");
}}
int main()
{
   front=rear=-1;
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