#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
    };
int main()
{
    //constructuin the root node
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;

return 0;
}