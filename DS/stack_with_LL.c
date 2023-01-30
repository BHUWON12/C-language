#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
}stack;
stack *top;
int stack_empty()
{
    if(top==NULL)
    return 1;
    else
    return 0;
}
void push()
{
    stack *p;
    if(top==NULL)
    {
        top=(stack*)malloc(sizeof(stack));
        printf("ENTER DATA");
        scanf("%d",&top->data);
        top->next=NULL;
    }
    else{
        p=(stack*)malloc(sizeof(stack));
        printf("ENTER DATA");
        scanf("%d",&p->data);
        p->next=top;
        top=p;
    }

    }
    void pop()
    {
        int i;
        stack *p;
    }


