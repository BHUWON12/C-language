#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
void pop();
void show();
void count();
int a[size],top=-1;

int main()
{
int ch;
while(1)
{
    printf("\t1.push\n\t2.pop\n\t3.display\n\t4.count\n\t5.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        show();
        break;
        case 4:
         count();
                break;
                exit(1);
                break;
                default:
                printf("enter correct choice\n");

    }
}}
void push()
{ int x;
if(top==size-1)
{
    printf("the stack is full\n");
}
else
{
    top++;
    printf("enter the data to be inserted in stack");
scanf("%d",&x);
a[top]=x;
}
}
void pop()
{ 
    if(top==-1)
    {
        printf("stack is alredy empty deletion can't happen");
    }
    else{
    printf("the deleted data is%d",a[top]);
    top--;
}
}
void show()
{
    int i;
    printf("elements in stack are\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}

void count()
{
    printf("number of elements in stack are=%d",top+1);
}
