//program to calculate the multiplication of the matrix
#include<Stdio.h>
int main()
{
    int sum=0,a[10][10],b[10][10],c[10][10],row1,row2,col1,col2,i,j,k;
    printf("enter the row and column size of matrix A\n");
    scanf("%d%d",&row1,&col1);
    printf("enter the row and column size of matrix B\n ");
    scanf("%d%d",&row2,&col2);
    if(row1==col2)
    {
        printf("enter the values of matrices A \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("enter data\n");
                scanf("%d",&a[i][j]);
            }}
        printf("enter the values of matrices B\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("enter data\n");
                scanf("%d",&b[i][j]);

            }}
            for(i=0;i<row1;i++)
            {
                for(j=0;j<col2;j++)
                {
                    sum=0;
                    for(k=0;k<col2;k++)
                    {
                        sum+=a[i][k]*b[k][j];
                     }
                    c[i][j]=sum; 
                     }}
                     printf("given matrix A =\n");
                     for(i=0;i<row1;i++)
                     {
                        for(j=0;j<col2;j++)
                        {
                           printf("%d\t",a[i][j]);
                        
                        }
                        printf("\n");
                     }
                      printf("given matrix B =\n");
                     for(i=0;i<row1;i++)
                     {
                        for(j=0;j<col2;j++)
                        {
                           printf("%d\t",b[i][j]);
                        
                        }
                        printf("\n");
                     }
                      printf("multiplication of matrix =\n");
                     for(i=0;i<row1;i++)
                     {
                        for(j=0;j<col2;j++)
                        {
                           printf("%d\t",c[i][j]);
                        
                        }
                        printf("\n");
                     }
       }
else
{
    printf("multiplication can not be done\n");
}
return 0;
}