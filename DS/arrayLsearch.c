#include<Stdio.h>
int main()
{
  int a[10],key,size,ans,i;
 printf("enter the size of array\n");
 scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("enter the element\n");
  scanf("%d",&a[i]);
  }
  printf("enter the key number\n");
  scanf("%d",&key);
for(i=0;i<size;i++)
{
    if(a[i]==key)
{
    ans=1; break;
}}
if(ans==1){
printf("the element you're searching is= %d & the locaton of element is= %d",key,i);
}
else
{
    printf("the element you entered that doesn't exist in array ");}
    return 0;
}