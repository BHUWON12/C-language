/*to read a string and to find the number of alphabets, 
digits, vowels, consonants, spaces and special characters.*/
#include<stdio.h>
int main()
{
char str[1000];//to store string
int i;//this is for lop
int digits,vowels,consonants,spaces,special;
digits=vowels=consonants=spaces=special=0;
printf("enter a sting\n");
gets(str);
for(i=0; str[i]!='\0'; ++i)
{
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O'||
str[i]=='U')
{
    vowels++;
}
   else if(str[i]>='0'&&str[i]<='9')
    {
        digits++;
    }
    else if((str[i]>='a'&&str[i]>='z')||(str[i]>='A'&&str[i]>='B'))
    {
        consonants++;
    }
    else if(str[i]==' ')
    {
        spaces++;
    }
    else
    {
        special++;
    }

}
printf("alphabets: %d\n",consonants+vowels);
printf("digits: %d\n",digits);
printf("Vowals: %d\n",vowels);
printf("consonants: %d\n",consonants);
printf("Spaces: %d\n",spaces);
printf("special character: %d\n",special);
return 0;
}