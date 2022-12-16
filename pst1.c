//program to read marks scored by n number of students and find the avrage of mark//
#include<stdio.h>
int main()
{
int i,j,k,m,n;
float a[10][10],sum,avg;
char grade[10];
printf("enter the number of students are in list\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    sum=0;
    printf("enter 3 score of student=%d\n",i+1);
    for(j=0;j<3;j++)
    {
        scanf("%f",&a[i][j]);
        sum +=a[i][j];
    }
    avg=sum/3.0;
    a[i][3]= avg;
    if(avg<30)
    {
        grade[i]='E';
    }
    else if(avg<40.0)
    {
        grade[i]='D';

    }
    else if(avg<50.0)
    {
        grade[i]='C';
    }  

    else if(avg<60.0)
    {
        grade[i]='B';
    }
    else
    {
        grade[i]='A';
    }
    printf("n S1.no score avrage grade \n");
    printf("................................\n");
    for(i=0;i<n;i++)
    {
        printf("%d",i+1);
        for(j=0;j<4;j++)
        {
            printf("%6f\t",a[i][j]);
            printf("%6c\t",grade[i]);
            printf("\n");

        }
    }
    }
return 0;
}













