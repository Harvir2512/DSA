#include<stdio.h>
#include<ctype.h>
#define max 100
struct stack
{
	char a[max];
	int top;
}s1;

void init()
{
	s1.top=-1;
}

int isempty()
{
	if(s1.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull()
{
	if(s1.top==max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(char ch)
{
	if(isfull())
	{
		printf("Stack is Full");
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

int perority(char x)
{
	if(x=='(')
	{
		return 0;
	}
	if(x=='+' || x=='-')
	{
		return 1;
	}
	if(x=='*' || x=='/')
	{
		return 2;
	}
	return 0;
}

int main()
{
	char exp[100];
	int i=0;
	
	printf("Enter Exprission :");
	scanf("%s",exp);
	init();

    while(exp[i]!='\0')
    {
    	if(isalnum(exp[i]))
    	{
    		printf("%c",exp[i]);
		}
		else if(exp[i]=='(')
		{
			push(exp[i]);
		}
		else if(exp[i]==')')
		{
			while(s1.top!=-1 && s1.a[s1.top]!='(')
			{
				printf("%c",pop());
			}
			if(s1.top!=-1)
			{
				pop();
			}
		}
		else
		{
			while(s1.top!=-1 &&  s1.a[s1.top]!='(' && perority(s1.a[s1.top])>perority(exp[i]))
			{
				printf("%c",pop());
			}
			push(exp[i]);
		}
		i++;
	}
	while(!isempty())
	{
		printf("%c",pop());
	}
	return 0;
}

