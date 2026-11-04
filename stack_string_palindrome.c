
#include<stdio.h>
#define max 100

struct stack
{
    char a[100];
    int top;
}s1;

void init()
{
    s1.top=-1;
}

int isempty()
{
    if(s1.top==-1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(s1.top==max-1)
        return 1;
    else
        return 0;
}

void push(char ch)
{
    if(isfull())
    {
        printf("Stack is full");
    }
    else
    {
        s1.top++;
        s1.a[s1.top]=ch;
    }
}

char pop()
{
    char val;

    if(isempty())
    {
        return '\0';
    }
    else
    {
        val=s1.a[s1.top];
        s1.top--;
        return val;
    }
}

void main()
{
    char str[100];
    int i,n,f=0;

    init();

    printf("Enter String Limit :");
    scanf("%d",&n);

    printf("Enter String :");

    for(i=0; i<n; i++)
    {
        scanf(" %c",&str[i]);
        push(str[i]);
    }

    str[n]='\0';

    for(i=0; i<n; i++)
    {
        if(str[i]!=pop())
        {
            f=1;
            break;
        }
    }

    if(f==0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }
}

