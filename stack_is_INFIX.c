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

char push(char ch)
{
	if(isfull())
	{
		printf("stack is full");
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
		printf("stack is empty");
	}
	else
	{
		
		val=s1.a[s1.top];
		s1.top--;
		return val;
	}
}

int priority(char x)
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

void main()
{
	char exp[100];
	char ch;
	int i=0;
	
	printf("enter exprssion in INFIX :");
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
			while((ch=pop())!='(')
			{
				printf("%c",ch);
			}
		}
		else
		{
			while(priority(s1.a[s1.top])>=priority(exp[i]))
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
}
