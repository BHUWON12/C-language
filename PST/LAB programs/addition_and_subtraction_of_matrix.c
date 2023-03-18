/* to perform addition and subtraction of Matrices */
#include<stdio.h>
int main()
{
int A[10][10],B[10][10];
int add[10][10],sub[10][10];
int i,j,r,c;//here the r s row and c is column
printf("enter the no of rows & columns\n");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)//for scaning the elements of the matrix A
{
    for(j=0;j<c;j++)
    {
        printf("enter the element of A\n");
        scanf("%d",&A[i][j]);
    }
}
for(i=0;i<r;i++)//for scaning the elements of the matrix B
{
    for(j=0;j<c;j++)
    {
        printf("enter the element of B\n");
        scanf("%d",&B[i][j]);
    }
}
for(i=0;i<r;i++)// matrix Addition
{
    for(j=0;j<c;j++)
    {
        add[i][j]=A[i][j]+B[i][j];
    }
}
for(i=0;i<r;i++)// matrix Substraction
{
    for(j=0;j<c;j++)
    {
        sub[i][j]=A[i][j]-B[i][j];
    }
}
//printing matrix A
printf("The matrix A= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("%d\t",A[i][j]);
    }
    printf("\n");
}
//printing matrix B
printf("The matrix B= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("%d\t",B[i][j]);
    }
    printf("\n");
}
//printing matrix Addition
printf("Addition(A+B)= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("%d\t",add[i][j]);
    }
    printf("\n");
}
//printing matrix Addition
printf("Substraction(A-B)= \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("%d\t",sub[i][j]);
    }
    printf("\n");
}

return 0;
}