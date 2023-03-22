/*Write a program to push 5,9,34,17,32 into stack and pop 3 times from the stack, also display the popped
numbers.*/
#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack
{
    int list[max];
}s;
int top=-1;
void push()
{
    if(top==max-1)
    {
        printf("the stack is FULL\n");
    }
    
    else
    {   
        top++;
        printf("enter data: ");
        scanf("%d",&s.list[top]);
        printf("data inserted\n");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("the stack is  empty\n");
    }
    else
    {
        int a;
        a=s.list[top];
        printf("element deleted: %d",a);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("STACK\t\n");
        for(int i=top;i>=0;i--)
        {
            printf("\n|       |\n");
            printf("    %d   \n",s.list[i]);
            printf("|       |\n");
        }
            printf(" _______\n");
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\nenter your choice\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();break;
            case 2:
            pop();break;
            case 3:
            display();break;
            case 4:
            exit(0);
            case 5:
            default:printf("enter valid choice\n");
            break;
            
        }
    }

return 0;
}