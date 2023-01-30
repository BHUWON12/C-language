#include<stdio.h>
int main()
{
 int a[3][3],n,i,j;
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
    printf("enter data\n");
    scanf("%d",&a[i][j]);
 }
 }
 printf("enter any number for bellow actions\n 1.matrix print\n 2.transpose and print\n");
 scanf("%d",&n);
 if(n==1)
 {
 printf("given matrix is \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }}
    else{
        printf("given matrix is \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }}
 printf("transpose of matrix is\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[j][i]);
    }
    printf("\n");
    }
    return 0;
}