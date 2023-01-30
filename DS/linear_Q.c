#include<stdio.h>
#include<stdlib.h>
#define n 5
int q[n];
int front=-1,rear=-1;
void enq()
{
    int x;
    if(rear==n-1)
    {
        printf("OVERFLOW");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        printf("insert data in the Queue:\n");
        scanf("%d",&x);
        q[rear]=x;
    }
    else
    {
        rear++;
        printf("insert data in the Queue:\n");
        scanf("%d",&x);
        q[rear]=x;
        
    }

}
void dq()
{
        int x;
    if(front==-1&&rear==-1)
    {
        printf("Underflow condition\n");

    }
    
    else
    {
        printf("the deleted data is: %d\n",q[front]);
          front++;
    }
    if(front>rear)
    {
        front=rear=-1;
    }
    }
    void display()
    {
        int i;
        if(front==-1&&rear==-1)
        {
            printf("The queue is empty \n");
        }
        else
        {
            printf("the element are :\n");
            for(i=front;i<rear+1;i++)
            {
                printf("\t %d",q[i]);
            }
        }

    }
int main()
{
    int ch;
     while(1)
    {
        printf("\n\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enq();
            break;
            case 2:
            dq();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("enter the correct choice from the above list\n");
        }

    }
}
