/*to find the roots of quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 float root1,root2,rpart,dmt;
 printf("enter the value of a,b,c\n");
 scanf("%d%d%d",&a,&b,&c);
 rpart=(b*b-(4*a*c));
 dmt=2*a;
if(rpart>=0)
{
    if(rpart>0)
    {
        root1=(-b+sqrt(rpart)/dmt);
        root2=(-b-sqrt(rpart)/dmt);
        printf("the first root has value %f\n",root1);
        printf("the second root has value %f\n",root2);
    }
    else
    {
        root1=root2=-b/dmt;
        printf("Both have same root value of %f",root1);
    }
}
else
{
    printf("roots are imaganary \n");
}
return 0;
}