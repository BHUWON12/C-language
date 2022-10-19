#include<stdio.h>
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
    printf("enter your choice\n" "1. begining\n2. last\n3. at array possition");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(i=(n-1);i>=0;i--)
        {
            a[i+1]+a[i];
            a[0]=x;
            n=n+1;
        }
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
            default :
            printf("enter correct choice");
    }
}
return 0;
}