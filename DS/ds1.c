#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20],i,x,n,pos,choice;
printf("enter the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\n enter the datas");
    scanf("%d",&a[i]);
}
while(1)
{
    printf("enter your choice\n" "1. begining\n2. last\n3. at array possition\n4. display\n5. exit\n");
    scanf("%d",&choice);
    printf("enter the data to be inserted  ");
    scanf("%d",&x);
    switch(choice)
    {
        case 1:
        for(i=(n-1);i>=0;i--)
        {
            a[i+1]+a[i];
        }    
            a[0]=x;
            n=n+1;
            break;
        case 2:
            a[n]=x;
            n=n+1;
            break;
        case 3:
            for(i=(n-1);i>=(pos-1);i--)
            {a[i+1]=a[i];
            }
            a[pos-1]=x;
            n=n+1;
            break;
        case 4:
           for(i=0;i<n;i++)
           printf("%d\t", a[i]);
        case 5:
          exit(1);

            default :
            printf("enter correct choice");
            
    }
}
return 0;
}