#include<stdio.h>
int main()
{
int h,m,s;
printf("enter current time =");
scanf("%d%d%d",&h,&m,&s);
for(h=0;h<24;h++)
{
    for(m=0;m<60;m++)
    {
        for(s=0;s<60;s++)
        {
            printf("\n\n\n   %d:%d:%d",h+h,m+m,s+s);
            for(double i=1;i<490000;i++)
        {}}
    }
}
return 0;
}