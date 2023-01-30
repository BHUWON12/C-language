#include<stdio.h>
#include<stdlib.h>
#include<direct.h>
int main()
{
int h=0,m=0,s=0;

while(1)
{
    printf("%2d:%2d:%d",h,m,s);
    s++;
    if(s==59)
    {
        m++;
        s=0;
    
    if(m==59)
    {
        h++;
        m=0;
        if(h==24)
        {
            h++;
        }}
        h=0;m=0;s=0;
 
}sleep(1);}
        
 
return 0;
}
