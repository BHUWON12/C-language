#include<stdio.h>
int main()
{
int a[5][5],b[5][5],c[5][5],i,j,row1,row2,col1,col2;
printf("enter the size of marix A\n");
scanf("%d%d",&row1,&col1);
printf("enter the size of matrix B");
scanf("%d%d",&row2,&col2);
if(row1==row2&&col1==col2)
{
    printf("enter the values of matrix A\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("enter data\n");
            scanf("%d",&a[i][j]);
        }
     }
      printf("enter the values of matrix B\n");
      for(i=0;i<row2;i++)
      {
        for(j=0;j<col2;j++)
        {
            printf("enter data\n");
            scanf("%d",&b[i][j]);
        }
      }
      for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }}
      printf("given matrix A=\n");
      for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
        {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
      }
      printf("given matrix B=\n");
      for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
      }
      printf("sum of two matices A+B=\n");
      for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
      {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
}}
else
{
    printf("addition of matrix can't happen");
}
return 0;
}