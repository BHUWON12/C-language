#include<stdio.h>
#include<stdlib.h>
typedef struct cq{
    int data;
    struct cq *next;  
}cq;
cq *front=NULL,*rear=NULL;
int Queue_empty()
{
    if(front==NULL&&rear==NULL)
        return 1;
    else 
    return 0;
}
 
 void enQ()
 {
    if(rear==NULL)
    {
        rear=(cq*)malloc(sizeof(int));
        printf("enter data\n");
        scanf("%d",&rear->data);
        front=rear;
    }
    else
    {
        rear->next=(cq*)malloc(sizeof(int));
        rear=rear->next;
        printf("enter data\n");
        scanf("%d",&rear->data);
        rear->next=NULL;

    }
 }
 void deq()
 {
    cq *p;
    int i;
    i=Queue_empty();
    if(i==0)
    {
        front=p;
        front=front->next;
        free(p);}
    if(front==NULL)
    {
    rear=NULL;
    }
    else{
        printf("Queue is empty\n");
    }
 }
 void dis()
 {
    cq *p;
    p=front;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
     }

int main()
{
    int ch;
    while(1)
    {
        printf("enter choice \n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enQ();
            break;
            case 2:
            deq();
            break;
            case 3:
            dis();
            break;
            case 4:
            exit(0);
            default:
            printf("enter correct choice\n\n");

        }
    }

return 0;
}