/*
10. Write a recursive program to find GCD of 4,6,8
*/
#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n1==0)return n2;
    if(n2==0)return n1;
    if(n1>n2)
    {
        return gcd(n1%n2,n2);
    }
    else
    {
        return gcd(n1,n2%n1);
    }
}
int main()
{ 
    int n1,n2,n3;
    int gcd1,gcd2;
    printf("enter n1,n2 & n3\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    gcd1=gcd(n1,n2);
    gcd2=gcd(n3,n1);
    printf("GCD of [%d,%d,%d]: %d",n1,n2,n3,gcd2);
return 0;
}