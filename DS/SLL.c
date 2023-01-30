#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
    node *head;
    int main()
    {
        int n,i;
        node *p;
        printf("Enter the number of node that you want to create\n");
        scanf("%d",&n);
        printf("create the first node\n");
        head=(node*)malloc(sizeof(node));
        printf("Enter the data\n");
        scanf("%d",&head->data);
        p=head;
        for(i=1;i<n;i++)
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
             printf("Enter %d no data",i);
             scanf("%d",&p->data);
             p->next=NULL;
        }
        printf("the nodes are:\n ");
        p=head;
        while(p!=NULL)
        {
           printf("%d\t->\t",p->data);
           p=p->next;

        }

    }

