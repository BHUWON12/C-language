#include<stdio.h>// program to make an username login system 
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<windows.h>
#include<pthread.h>
#include<string.h>
#include<math.h>
void reset()// for  switching the text color white from any color  
 {
    printf("\033[0m");
 }

void red()// red color code
{
    printf("\033[1;31m");
    
}
void purple()//purple color code
{
    printf("\033[1;35m");
}


void green()//green color code
{
    printf("\033[1;32m");
   
}

void blue()// blue color code
{
    printf("\033[1;34m");
}

void yellow()// yellow color code
{
    printf("\033[1;33m");
}

int load() //load// to show the loading of the system
{
    int i;
while(1)
{
    green();
    printf("\n");
    printf("\n");
    printf("\t");  
    printf("\t");  
    printf("\t");
printf("LOADING\t");
reset();
for(i=0;i<3;i++)
{
    blue();
     Beep(1000,500);
    
      printf(">>>\t");

     Beep(4000,500); reset();
}
system("cls");// to clear the screen
break;
}}
int main()
// to make a login password system 
{
    char user[50],pass[50],i,c=5;
    while(1)
    {
        green();
      printf("\nENTER SYSTEM USERNAME:- \n");
      scanf("%s",&user);
      if(!strcmp(user,"acharya"))
      {
        printf("ENTER YOUR PASSWORD :- ");
        scanf("%s",&pass);

      if(!strcmp (pass,"acharya@123"))
      {
        
        printf("\n\tACCESS GRANTED [DONE]\n",Beep(4000,1200));
      blue(); 
      
      for(i=0;i<4;i++)
        {
        blue();
     printf("LOADING\n");
     sleep(1); 

        system("cls"); 
             
        reset();
      break;}
      }
      else{

      red();
            Beep(800,1200);
            printf("DATA INVALID\n TRY AGAIN!!\n");reset(); 
        purple();
        printf("\nYou have only:%d chance to login \n",c=c-1);reset();
      if (c==0)
    {
        red();
        Beep(100,1000);
        printf("!!!!!..SYSTEM FALIOUR..!!!!!\n",Beep(5000,200)); // for exiting from the system
        reset();

        exit(1);}
      }
      }else{
              
            red();
            Beep(800,1200);
            printf("DATA INVALID\n TRY AGAIN!!\n");reset(); 
        purple();
        printf("\nYou have only:%d chance to login \n",c=c-1);reset();
      if (c==0)
    {
        red();
        Beep(100,1000);
        printf("!!!!!..SYSTEM FALIOUR..!!!!!\n",Beep(5000,200)); // for exiting from the system
        reset();

        exit(1);
    }}}}
        
