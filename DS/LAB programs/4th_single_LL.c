/*Write a program to insert the elements {61,16,8,27} into singly linked list and delete 8,61,27 from the
list. Display your list after each insertion and deletion.*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
struct node *next;    
}node;
struct node *head,*new;
void display()
{
    node*p;
    p=head;
    printf("the list is Bellow\n");
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
      
    }
      printf("\n");
}

void insertion()
{  //struct node *new;   
        new->next=(node*)malloc(sizeof(node*));
        new=new->next;
        printf("enter a data\n");
        scanf("%d",&new->data);
        new->next=NULL;
       }
   
void deletion()
{
    int i,pos;
    node*p,*q;
    printf("enter the position that you want to delete\n");
    scanf("%d",&pos);
    p=head;
    if(pos==1)
    {
        head=head->next;
        printf("the deleted data is %d",p->data);
        free(p);
    }
    else
    {
    for(i=1;i<pos-1;i++)
    { 
        p=p->next;
        q=p->next;
    }
     p->next=q->next;
        printf("the deleted data is %d\n",q->data);
        free(q);
    }
}

int main()
{
    int ch;
      head=(node*)malloc(sizeof(node*));
      head->next=NULL;
        printf("creating head node\n");
         printf("enter a data\n");
        scanf("%d",&head->data);
         new=head;  
    while(1)
    {
        printf("enter a choice \n1.insert\n2.delete\n3.display\n4.exit\n");
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
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("enter a valid choice \n");
        }
    }
return 0;
}