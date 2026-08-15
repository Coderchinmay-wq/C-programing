#include<stdio.h>
#include<string.h>
#define MAX 15

typedef struct stack
{
    char items[MAX];
    int top;
}*St;

void push(St s,char value)
{
    if (s->top < MAX - 1)
    {
        s->items[++(s->top)] = value;
    }
}
char pop(St s)
{
    if(s->top >= 0)
    {
        return s->items[(s->top)--];
    }
    return '\0'; //return null character if stack is empty
}
int isPalindrome(St s, char arr[])
{
    int length = strlen(arr);
    int i;
    for (i=0; i<length; i++)
    {
        push (s, arr[i]);
    }
    for (i=0; i<length ; i++)
    {
        if(arr[i] != pop(s))
       {
           return 0;
       }
    }
    return 1;//Palindrome
}
int main()
{
    St s = (St)malloc(sizeof(struct stack));
    s->top=-1;
    char arr[MAX]; //array to store input string

    printf("enter a string: ");
    scanf("%s", arr);
    if(isPalindrome(s,arr))
    {
        printf("the string is palindrome.\n");
    }
    else
    {
        printf("the string is not a palindrome.\n");
    }
    return 0;
}
