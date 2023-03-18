/*to find the length of a string without using built in function*/
#include<stdio.h>
int main()
{
char str[100];
int count=0,i=0;
printf("enter A string\n");
gets(str);//
//OR[scanf("%s",str);]
printf("%s",str);
while (str[i]!='\0')
{
    count++;
    i++;
}
printf("The length of string= %d",count);
return 0;
}