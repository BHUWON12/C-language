#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int arr[5];
    int top;
}s;
int full()
{
    if(s.top==4)
    return 1;
    else 
 return 0;
}
int empty()
{
    if(s.top==-1)
    return 1;
    else
    return 0;
}
void pop()
{
int  i,x;
x= empty();
if(x==0){
i=s.arr[s.top];
printf("deleted value is=%d\n",i);
s.top--;
}
else
{
    printf("the stack is empty\n");
}}

void push()
{
    int i,x;
    x= full();
    if(x==0)
    {
        s.top++;
        printf("enter the number to be inserted\n");
        scanf("%d",&i);
        s.arr[s.top]=i;
    }
    else
    {
        printf("the stack is full\t");
    }}
    void display()
    {
        int i;
        for(i=5;i>=0;i--)
        {
            printf("%d\n",s.arr[i]);}}
        
        void count()
        {
          printf("no of elements in stack is =%d\n",s.top+1);
        }
    int main()
    {
        int ch;
        s.top=-1; 
        while(1)
        {
            printf("\t1.pop\n\t2.push\n\t3.display\n\t4.count\n\t5.exit\n");
            printf("enter your choice");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                pop();
                break;
                case 2:
                push();
                break;
                case 3:
                display();
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
   