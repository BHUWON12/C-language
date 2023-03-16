/*to read three numbers and find the biggest of three*/
#include<Stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b&c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest number %d\n",a);
    }
    else if(b>a&b&c)
    {
        printf("b is greatest number %d\n",b);
    }
    else
    {
        printf("c is a greatest number %d\n",c);
    }
    return 0;
}