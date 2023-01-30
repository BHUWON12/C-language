#include<Stdio.h>
#include<Stdlib.h>
struct cqueue {
    int cq[5];
    int rear,front;
}q;
int cq_empty()
{
    if(q.rear==-1&&q.front==-1)
    return 1;
    else
    return 0;
}
int cq_full()
{
    if(q.front==((q.rear+1)%5))
    return 1;
    else 
    return 0;
}
void cq_enqueue()
{
    int i,x;
    i=cq_full();
    if(i==0)
    {
        q.rear=(q.rear+1)%5;
        printf("Enter a value to be inserted in Q\n");
        scanf("%d",&x);
        q.cq[q.rear]=x;
        if(q.rear==0)
        {
            q.front=q.rear;
        }
    }
    else
    {
        printf("Queue is full \n");
    }
}
void cq_dequeue()
{
    int i,x;
    i=cq_empty();
    if(i==0)
    {
        x=q.cq[q.front];
        printf("The deleted value is %d\n",x);
        q.front=((q.front+1)%5);
        if(q.front==(q.rear+1)%5)
        {
            q.front=q.rear=-1;
        }
    }
    else
    {
        printf("The queue is empty\n");

    }
}
void display()
{
    int i;
    printf("the elements are in the QUEUE\n");
   for(i=q.front;i!=q.rear;(i+1)%10)
    {
       printf("%d\t\n",q.cq[i]); 
    }
    printf("%d\n",q.cq[i]);
}
int main()
{
    int ch;
    q.front=q.rear=-1;
     while(1)
    {
        printf("\n\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            cq_enqueue();
            break;
            case 2:
            cq_dequeue();
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

