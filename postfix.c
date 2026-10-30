#include<stdio.h>

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

int perority(char x)
{
	if(x=='+' || x=='-')
	   return 1;
	if(x=='*' || x=='/')
	   return 2;

   return 0;
}

void main()
{
	char e[100];
	int i=0;
	
	printf("Enter Exprission :");
	scanf("%s",e);
	
	init();
	
	while(e[i]!='\0')
	{
		if(isalnum(e[i]))
		{
			printf("%c",e[i]);
		}
		else
		{
			while(s1.a[s1.top]!=-1 && perority(s1.a[s1.top])>=perority(e[i]))
			{
				printf("%c",pop());
			}
			push(e[i]);
		}
		i++;
	}
	
	while(!isempty())
	{
		printf("%c",pop());
	}
}
