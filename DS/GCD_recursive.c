#include<stdio.h>
int gcd(int n1,int n2,int n3)
{
    if(n1==0) return n2;
    if(n2==0) return n1;
    if(n3==0) return n2;

if(n1>n2&&n3)
{
    return gcd(n1%n2,n2,n3);
}
else if(n2>n1&&n3)

{
return gcd(n1,n2%n1,n3);
}
else 
{
    return gcd(n1,n2,n3%n1);
}
}

int main()
{
    int n1,n2,n3;
    printf("enter two numbers n1,n2&n3\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf(" gcd of n1 &n2 is %d",gcd(n1,n2,n3));
}
