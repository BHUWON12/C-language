/*to read percentage of marks and to display appropriate message
(Demonstration of else-if ladder) */
#include<stdio.h>
int main()
{
float ds,dms,pst;//per subject maximum marks is 300
char name[30];
int rollno;
float total,pct;
printf("enter the roll no of the student\n");
scanf("%d",&rollno);
printf("enter the name of the student\n");
scanf("%s",name);
printf("enter the DS subject's marks\n");
scanf("%f",&ds);
printf("enter the DMS subject's marks\n");
scanf("%f",&dms);
printf("enter the PST subject's marks\n");
scanf("%f",&pst);
total=ds+dms+pst;
pct=(total/300)*100;
printf("roll no:- %d\n",rollno);
printf("student name:- %s\n",name);
printf("DS marks:- %f\n",ds);
printf("DMS marks:- %f\n",dms);
printf("PST marks:- %f\n",pst);
printf("total marks:- %f\n",total);
printf("Percentage:- %f\n",pct);
if(pct>=90)
{
    printf("result: distiction\n");
}
else if(pct>=75)
{
printf("result: very good");
}
else if (pct>=60)
{
    printf("result: good");
}
else if(pct>=40)
{
    printf("result: Pass");
}
else
{
    printf("result: fail");
}
return 0;
}