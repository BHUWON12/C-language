#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}node;
node *head;


//printing the data
void printing()
{

  node *p;
  p=head;
  while(p!=NULL)
  {
    printf("%d->",p->data);
    p=p->next;
  }
}
//counting data
void counting()
{
  int c=0;
  node *p;
  p=head;
  while(p!=NULL)
  {
   c++;
   p=p->next;
  }
 printf("number of nodes are %d",c);
}
//searching the node
void searching()
{
  int x,i=0,c=0;
  node *p;
  p=head;
  printf("Enter the data to be search\n");
  scanf("%d",&x);
  while(p!=NULL)
  {
    i++;
    if(x==p->data)
    {
    printf("%d data found at %d index",x,i);
    c=1;
    }
    p=p->next;
  }
  if(c==0)
  {
   printf("invalid data its not present in the list");
  }
}
//INSERTION AT TYHE BEGINNING
void insertion_at_the_beginning()
{
  node *n;
  n=(node*) malloc(sizeof(node));
  printf("Enter the data\n");
  scanf("%d",&n->data);
  n->next=NULL;
  n->next=head;
  head=n;
}
//INSERTION AT LAST
void insertion_at_last()
{
 node *p,*n;
 n=(node*)malloc(sizeof(node));
 printf("Enter the data");
 scanf("%d",&n->data);
 n->next=NULL;
 p=head;
 while(p->next!=NULL)
 {
   p=p->next;
 }
p->next=n;
}
//INSERTION AT ANY PO9STION
void insertion_at_any_position()
{
  int pos,i;
  node *n,*p;
  n=(node*)malloc(sizeof(node));
  printf("Enter the data\n");
  scanf("%d",&n->data);
  n->next=NULL;
  printf("Enter the position where the node is to be inserted\n");
  scanf("%d",&pos);
  p=head;
  for(i=1;i<(pos-1);i++)
  {
    p=p->next;
  }
 n->next=p->next;
 p->next=n;
}
//DELETION AT FRONT
void deletion_at_front()
{
 node *p;
 p=head;
 head=head->next;
 free(p);
}
//VOID DELETION AT THE LAST
void deletion_at_last()
{
  int i,pos;
  node *p,*q;
  p=head;
  while(p->next!=NULL)
  {
   p=p->next;
  }
  q=head;
  while(q->next->next!=NULL)
  {
   q=q->next;
  }
  q->next=NULL;
  free(p);
}
//VOID DELETION_AT_ANY_POSITION
void deletion_at_any_position()
{
  node *p,*q;
  int pos,i;
  printf("Enter the position to br deleted");
  scanf("%d",&pos);
  for(i=1;i<(pos-1);i++)
  {
    p=p->next;
  }
  q=p->next;
  p->next=q->next;
  free(q);
 }
void sorting()
{
  node *p,*q;
  int t;
  p=head;
  while(p!=NULL)
  {
    q=head;
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
/*void concatination()
{
  node *n,*p;
  n=(node*)malloc(sizeof(node));
  printf("Enter the data");
  scanf("%d",&p->data);
  n->next=NULL;*/


int main()
 {
   int n,i,ch;
   node *p;
   printf("Enter the number of node\n");
   scanf("%d",&n);

   head=(node*)malloc(sizeof(node));
   printf("Enter the data inside the node");
   scanf("%d",&head->data);
   head->next=NULL;
   p=head;
   for(i=1;i<=n;i++)
   {
     p->next=(node*)malloc(sizeof(node));
     p=p->next;
     printf("Enter the dat inside the node");
     scanf("%d",&p->data);
     p->next=NULL;
   }
   while(1)
   {
     printf("\nEnter your choice\n1:printing\n2:counting\n3:searching\n4:insertion_at_beginning\n5:insertion_at_last\n6:insertion_at_any_position\n7:deletion_at_begging\n8:deletion_at_last\n9:deletion_at_any_position\n10:sorting\n11:exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
	      printing();
	      break;
       case 2:
	       counting();
	       break;
      case 3:
	       searching();
	       break;
       case 4:
	      insertion_at_the_beginning();

	       break;

      case 5:
	      insertion_at_last();
	      break;
      case 6:
	      insertion_at_any_position();
	      break;
      case 7:
	       deletion_at_front();
	       break;
      case 8:
	       deletion_at_last();
	       break;
      case 9:
	       deletion_at_any_position();
	       break;
      case 10:
	       sorting();
	      break;
      case 11:
		exit(1);
		break;
      default:
	       printf("Enter correct choice\n");
      }
    }
 }







