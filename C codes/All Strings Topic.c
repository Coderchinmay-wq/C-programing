/*#include<stdio.h>
void display(char str[100]);
main()
{
    char str[100];
    printf("Enter a String \n");
    gets(str);
    display(str);
}
void display(char str[100])
{
    puts(str);
}*/

//WAMCP to compute length of string with inbuild function
/*#include<stdio.h>
#include<string.h>
void stringlength(char str[100]);
main()
{
    char str[100];
    printf("Enter string \n");
    gets(str);
    stringlength(str);
}
void stringlength(char str[100])
{
    int l;
    l=strlen(str);
    printf("length of string %d\n",l);
}*/

//WAMCP to display string without inbuilt function:
/*#include<stdio.h>

void stringlength(char str[100]);
main()
{
    char str[100];
    printf("Enter string \n");
    gets(str);
    stringlength(str);
}
void stringlength(char str[100])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("length of string %d\n",i);
}*/

//WAMCP to copy a string without using inbuilding
/*#include<string.h>
void stringcopy(char d[100], char s[100]);
main()
{
    char d[100], s[100];
    printf("Enter string \n");
    scanf("%s",s);
    stringcopy(d,s);
}
void stringcopy(char d[100],char s[100])
{
    int i=0;
    while(s[i]!='\0')
    {
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
    printf("Destination string %s\n",d);
}*/

//WAMCP to copy a string with using inbuilding
/*#include<stdio.h>
#include<string.h>
void stringcopy(char d[100], char s[100]);
main()
{
    char d[100], s[100];
    printf("Enter string \n");
    scanf("%s",s);
    stringcopy(d,s);
}
void stringcopy(char d[100],char s[100])
{
    strcpy(d,s);
    printf("Destination string %s\n",d);
}*/

//WAMCP to copy a string with using inbuilding
/*#include<stdio.h>
void stringconc(char s1[100],char s2[100]);
main()
{
    char s1[100],s2[100];
    printf("Enter string s1\n");
    scanf("%s",s1);
    printf("Enter string s2\n");
    scanf("%s",s2);
    stringconc(s1,s2);
}
void stringconc(char s1[100],char s2[100])
{
    int i=0, j=0;
    while(s1[i] !='\0')
    {
        i++;
    }
    while(s2[i] !='\0')
    {
        i++;
        j++;
    }
    s1[i]='\0'

    printf("s1 after appending s1=%s\n",l);
}*/



/*#include<stdio.h>
int stringcmp(char s1[100],char s2[100]);
main()
{
    char s1[100],s2[100],c;
    printf("enter string for s1\n");
    scanf("%s",s1);
    printf("enter string for s2\n");
    scanf("%s",s2);
    c=stringComp(s1,s2);
    if(c==0)
    {
        printf("equal");
    }
    else if(c==-1)
    {
        printf("s1<s2");
    }
    else
    {
        printf("s1>s2");
    }
}
int stringComp(char s1[100],char s2[100])
{
    int i=0;
    while(s1[i]||s2[i])
    {
        if(s1[i]==s2[i])
        {
            i++;
        }
        else if(s1[i]<s2[i])
        {
            return -1;
        }
        else
        {
            return +1;
        }
    }
}
*/

#include<stdio.h>
#include<string.h>
void stringcompare(char s1[100],char s2[100]);
main()
{
    char s1[100],s2[100];
    printf("Enter s1 string\n");
    scanf("%s",s1);
    printf("Enter s2 string\n");
    scanf("%s",s2);
    stringcompare(s1,s2);
}
void stringcompare(char s1[100],char s2[100])
{
    int c;
    c=strcmp(s1,s2);
    printf("%d",c);
}
