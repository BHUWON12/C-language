/*to demonstrate string functions*/

/*
strlen()	It returns the string's length.
strnlen()*	It returns the specified value if the value specified is less 
            than the string length, otherwise the string length.
strcmp()	It compares two strings and returns 0 if the strings are the same.
strncmp()*	It compares two strings only to n characters.
strcat()	It concatenates two strings and returns the concatenated string.
strncat()*	It concatenates n characters of one string to another string.
strcpy()	It copies one string into another.
strncpy()*	It copies the first n characters of one string into another.
strchr()*	It finds out the first occurrence of a given character in a string.
strrchr()*	It finds out the last occurrence of a given character in a string.
strstr()	It finds out the first occurrence of a given string in a string.
strnstr()*	It finds out the first occurrence of a given string in a string where the search
            is limited to n characters.
strcasecmp()	It compares two strings without sensitivity to the case.
strncasecmp()*	It compares n characters of one string to another without sensitivity to the case.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],c1[30];
    int n;
    int temp;
    printf("enter the string for s1\n");
    gets(s1);
    printf("enter the string for s2");
    gets(s2);
    temp=strlen(s1);
    printf("%d\n",temp);
    temp=strcmp(s1,s2);
    printf("%d\n",temp);
    printf("%s\n",strcat(s1,s2));
    strcpy(s1,s2);
     printf("%s-->>\t",s1);
     printf("%s\n",s2);
     printf("%s\n",c1);
     printf("%s\n",strstr(s1,s2));
     printf("%d\n",strcasecmp(s1,s2));
    return 0;
}   