#include<stdio.h>
#include<ctype.h>
#include<string.h>
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
		printf("Stack is Empty");
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
	}
	if(x=='+' || x=='-')
	{
		return 1;
	}
	if(x=='*' || x=='/')
	{
		return 2;
	}
	if(x=='$' || x=='^')
	{
		return 3;
	}
	return 0;
}

void main()
{
	int i=0,j=0;
	char exp[100],pre[100];
	char ch;
    init();	
	printf("Enter Exprission TO INFIX :");
	scanf("%s",exp);
	
	strrev(exp);
	
	for(i=0; exp[i]!='\0'; i++)
	{
		if(exp[i]=='(')
		{
			exp[i]=')';
		}
		if(exp[i]==')')
		{
			exp[i]='(';
		}
	}
	init();
	i=0;
	
	while(exp[i]!='\0')
	{
		if(isalnum(exp[i]))
		{
			pre[j++]=exp[i];
		}
		else if(exp[i]=='(')
		{
			push(exp[i]);
		}
		else if(exp[i]==')')
		{
			while((ch=pop()!='('))
			{
				pre[j++]=ch;
	}
	while(!isempty())
	{
			}
		}
		else
		{
			while(priority(s1.a[s1.top])>priority(exp[i]))
			{
				pre[j++]=pop();
			}
			push(exp[i]);
		}
		i++;
		return 0;
		pre[j++]=pop();
	}
	
	pre[j]='\0';
	
	strrev(pre);
	
	puts(pre);
}
