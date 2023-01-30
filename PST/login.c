#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,c;
    char pass[50],user[50];
    while(1)
    {
    printf("ENTER YOUR USERNAME:- ");
    scanf("%s",&user);
    if(!strcmp(user,"Acharya"))
    {
        printf("USERNAME EXIST>>\n");
      printf("ENTER YOUR PASSWORD:- ");
      scanf("%s",pass);
        if (!strcmp(pass,"ACHARYA@123"))
        {
            printf("LOGIN SUCCESSFUL->->->->");
             break;
        }
        else
        {
         printf("PASSWORD WRONG!!");
        }
    }else
        {
        printf(" INVALID USERNAME!! \n");
    }
 } 

return 0;
}