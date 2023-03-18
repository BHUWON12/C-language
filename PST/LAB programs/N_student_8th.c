/*to read marks scored by n students and find the average of marks
(Demonstration of single dimensional array)*/
#include<stdio.h>
int main()
{
 int rollno[10],s1[10],s2[10],s3[10];
 int n;
 float avg[10];
 int i;
 printf("enter the number of student's details you want to fill\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("enter roll no\n");
    scanf("%d",&rollno[i]);
    printf("enter the marks of 1st subject\n");
    scanf("%d",&s1[i]);
    printf("enter the marks of 2st subject\n");
    scanf("%d",&s2[i]);
    printf("enter the marks of 3st subject\n");
    scanf("%d",&s3[i]);
 }
 for(i=0;i<n;i++)
 {
    avg[i]=(s1[i]+s2[i]+s3[i])/3;
 }
      printf("--------STUDENT'S MARKS AND AVRAGE---------\n");
      printf("rollno\tsub1\tsub2\tsub3\tAVG\n");
      printf("-------------------------------------------\n");
  for(i=0;i<n;i++)
  {
     printf("%d\t",rollno[i]);
     printf("%d\t",s1[i]);
     printf("%d\t",s2[i]);
     printf("%d\t",s3[i]);
     printf("%f",avg[i]);

  }
return 0;
}