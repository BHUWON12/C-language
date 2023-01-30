#include<Stdio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *next;
}node;
node *head;
void printing()// for printing the all nodes or displaying the all data
{
    node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}
void counting()//for the counting the number of nodes 
{
    node *p;
    int c=0;
    p=head;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    printf("the total counting is %d",c);
}
void insertion_at_begging()// inserting the data at begining
{
    node *new;
    new=(node*)malloc(sizeof(node));
    printf("ENTER DATA\n");
    scanf("%d",&new->data);
    new->next=NULL;
    new->next=head;
    head=new;
}
void insertion_at_last() //inserting the data at last possition
{
    node *new,*p;
    new=(node*)malloc(sizeof(node));
    printf("ENTER DATA\n");
    scanf("%d",&new->data);
    new->next=NULL;
    p=head;
    while (p->next!=NULL)
        p=p->next;
        p->next=new;
}
void insertion_at_any_position()// to insert the node at any possition
{
    node *p,*q,*new;
    int pos,i;
    new=(node*)malloc(sizeof(node));
    printf("ENTER DATA\n");
    scanf("%d",&new->data);
    new->next=NULL;
    printf("Enter the position\n");
    scanf("%d",&pos);
    p=head;
    for(i=1;i<pos;i++)
    {
        //or with bellow line:- p=p->next;
        q=p->next;
        new->next=p->next;
        p->next=new;

    }

}
void deletion_at_begining()//for deleting the d=node form beginning
{
    node *p;
    p=head;
    head=head->next;
    free(p);
}
void deletion_at_last()//for deleting the d=node form last
{
    node *p,*q;
    p=head;
    while(p->next!=NULL)
    p=p->next;
    q=head;
    while(q->next->next!=NULL)
    q=q->next;
    q->next=NULL;
    free(p);
}
void deletion_at_any_position()
{
    node *p,*q;
    int pos,i;
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    p=head;
    for(i=1;i<(pos-1);i++)
    {
        p=p->next;
        q=p->next;
        p->next=q->next;  
    }
   //  printf("deleted data=%d postiion=%d",p->next,i);
   free(q);
}
void search()
{
    int x,c;
    node *p;
    printf("Enter the node to be search");
    scanf("%d",&x);
    p=head;
    while(p!=NULL)
    {
        if(x==p->data)
        {
            printf("%d founded",x);
        c++;
        }
        p=p->next;
    }
    if(c==0)
    {
        printf("Element not found");
    }
}
void shorting()
{
    node *p,*q;int t;
    p=head;
    while(p!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(p->data>q->data)
            {
                t=p->data;
                p->data=q->data;
                q->data=t;
            }
            q=q->next;
        }
        p=p->next;
    }
}
void concatenation()
{
    node *head1,*p;
    int n,i;
    //create another linked list
    printf("Enter the number of nodes of new LL\n");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("enter data\n");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    for(i=1;i>n;i++)
    {
    p->next=(node*)malloc(sizeof(node));
    p=p->next;
    printf("Enter data");
    scanf("%d",p->data);
}
p->next=NULL;
p=head;
while(p->next!=NULL)
{
    p=p->next;
    p->next=head1;//concardinated
}
}
void merging()
{
    concatenation();
    shorting();
}
void split()
{
node *p,*q,*head1;
int pos,i;
printf("enter the position\n");
scanf("%d",&pos);
p=head;
for(i=1;i<pos;i++)
    p=p->next;
    head1=p->next;
    p->next=NULL;
//printing the first split
p=head;
while(p!=NULL)
{
    printf("%d->",p->data);
    p=p->next;
    //printing the second split
    p=head1;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p->next;
    }
}}
int main()
{
    node *p;
int n,i,ch;
printf("enter how many nodes you want\n");
scanf("%d",&n);
head=(node*)malloc(sizeof(node));
printf("ENTER THE DATA\n");
scanf("%d",&head->data);
head->next=NULL;
p=head;
for(i=1;i<n;i++)
{
    p->next=(node*)malloc(sizeof(node));
    p=p->next;
    printf("ENTER DATA\n");
    scanf("%d",&p->data);
    p->next=NULL;
}
while(1)
{
    printf("\nenter your choice form bellow.\n");
    printf("1.insertion_at_begining\n2.insertion_at_last\n3.insertion_at_any_position\n4.deletion_at_begining\n5.deletion_at_last\n");
    printf("6.deletion_at_any_position\n7.printing\n8.counting\n9.concatenation\n10.search\n");
    printf("11.shorting\n12.merging\n13.split\n14.exit");


    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertion_at_begging();break;
        case 2: insertion_at_last();break;
        case 3: insertion_at_any_position();break;
        case 4: deletion_at_begining();break;
        case 5: deletion_at_last();break;
        case 6: deletion_at_any_position(); break;
        case 7: printing();break;
        case 8: counting();break;
        case 9: concatenation();break;
        case 10: search();break;
        case 11: shorting();
        case 12: merging();break;
        case 13: split();break;
        case 14: exit(1);
        default: printf("Enter correct choice\n");
    }
}
return 0;
}
