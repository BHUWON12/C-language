#include<stdio.h>
int main()
{
int i,j,k,n,num,flag=0;
float a[50];
printf("Size of Array? ");
scanf("%d", &n);
printf("Array size is = %d\n",n);
num = n;
printf("\nArray Elements? \n");
for(i = 0; i < n; i++)
scanf("%f", &a[i]);
for(i = 0; i < n; i++)
scanf("%6.2f", a[i]);
printf("\n");
/* Removing duplicate elements */
for(i = 0; i < n-1; i++)
for(j=i+1; j<n; j++)
{
if(a[i] == a[j])
{
n = n -1;
for(k=j; k<n; k++)
a[k] = a[k+1];
flag = 1;
j = j - 1;
}
}
/* Use of IF and ELSE statement */
if(flag == 0)
printf("\nNo duplicates found in Array\n");
else
{
printf("\nArray has %d duplicates \n\n", num - n);
printf("Array after deleting duplicates:\n");
for(i=0; i<n; i++)
printf("\n%6.2f", a[i]);
printf("\n");
}
return 0;
}