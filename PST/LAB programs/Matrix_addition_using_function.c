/*to read, display and add two m x n matrices using functions*/
#include<stdio.h>
void addition(int A[10][10],int B[10][10],int r,int c)
{
    int i,j,ADD[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            ADD[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("the sum of matrix is \n\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",ADD[i][j]);
        }
        printf("\n");
    }
}
int main()
{
int A[10][10],B[10][10],r,c,i,j;
printf("enter the size of rows and columns\n");
scanf("%d%d",&r,&c);
printf("enter matrix A");
 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element\n");
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter matrix B");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element\n");
            scanf("%d",&B[i][j]);
        }
    }
    addition(A,B,r,c);
return 0;
}