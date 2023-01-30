#include<stdio.h>
int main()
{
    int a[25][25],r,c,i,j,ch;
    int s[25][3],p=1,t[10][10];
    printf("Enter the row and col of the matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the value in matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    } 
    printf("the given matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a
            [i][j]);
        }printf("\n");
    }
    s[0][0] = r;
    s[0][1] =c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j] != 0){
                 s[p][0] =i;
                s[p][1] = j;
                 s[p][2] = a[i][j];
                p++;
            }
        }
    }
    s[0][2]= p-1;
    printf("Sparse Matrix are\n");
    for(i=0;i<p;i++){
        for(j=0;j<3;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");}
        //from this line the code will be of transpose of matrix
        printf("enter your choice \n any number to get transpose of sparse");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            for(i=0;i<=p;i++)
            {

            s[i][0]=t[i][0];
            s[i][1]=s[i][0];
            t[i][0]=s[i][0];
            }
            for(i=0;i<=p;i++){
        for(j=0;j<3;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");}
            break;
            default:
            printf("you don't wanna do transpose\n");
           }

    return 0;
    }