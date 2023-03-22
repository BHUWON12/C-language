/*Write a program to add 6x3+10x2+0x+5 and 4x2+2x+1 using linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int pow;
    int coef;
    struct node *next;
}node;
struct node *head1,*head2,*head3;
void creating_nodes()
{
    head1=(node*)malloc(sizeof(node*));
    head2=(node*)malloc(sizeof(node*));
    head3=(node*)malloc(sizeof(node*));
}       
void insert_poly()
{
    struct node *p1;
     struct node *p2;
    int n1,n2,i;
    p1=head1;
    p2=head2;
    printf("1st NODE:\n");//creating and adding data in the 1st polynomial list
    printf("Enter the terms: ");
    scanf("%d",&n1);
    printf("enter coef & pow: ");
    scanf("%d%d",&p1->coef,&p1->pow);
    for(i=1;i<n1;i++)
    {
        p1=p1->next;
        p1=(node*)malloc(sizeof(node*));
        printf("enter coef & pow: ");
        scanf("%d%d",&p1->coef,&p1->pow);
        p1->next=NULL;

    }
    printf("2nd NODE:\n");//creating and adding data in the 2st polynomial list
    printf("Enter the terms: ");
    scanf("%d",&n2);
    printf("enter coef & pow: ");
    scanf("%d%d",&p2->coef,&p2->pow);
    for(i=1;i<n2;i++)
    {
        p2=p2->next;
        p2=(node*)malloc(sizeof(node*));
        printf("enter coef & pow: ");
        scanf("%d%d",&p2->coef,&p2->pow);
        p2->next=NULL;

    }
}
void poly_addition()
{
    struct node *p1,*p2,*p3;
    p1=head1;p2=head2;p3=head3;
    while(p1!=NULL&&p2!=NULL)
    {
        
        if(p1->pow==p2->pow)
        {
            p3->coef=p1->coef+p2->coef;
            p3->pow=p1->pow;
            p3=p3->next;
        }
        else if(p1->pow>p2->pow)
        {
            p3->coef=p1->coef;
            p3->pow=p1->pow;
        }
        else
        {
            p3->coef=p2->coef;
            p3->pow=p2->pow;
        }
        p1=p1->next;
        p2=p2->next;
        p3->next=(node*)malloc(sizeof(node*));
        p3=p3->next;
        p3->next=NULL;
    }

}
void display()
{
   struct node *p=head3;
   printf("SUM of pollynomial:: \n");
   while(p!=NULL)
   {
    printf("%d(x^%d)",p->coef,p->pow);
    p=p->next;
   }

}
int main()
{
 creating_nodes();
 insert_poly();   
 display();
return 0;
}