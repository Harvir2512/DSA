#include<stdio.h>
#define max 5
struct stack
{
	int top;
	int a[max];
}s1;

void init()
{
	s1.top=-1;
}
int isEmpty()
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

void push(int num)
{
  if(isfull())
  {
     printf("\nstack is full\n"); 
  }	
  else
  {
  	 s1.top++;
  	 s1.a[s1.top]=num;
  	 printf("\ninserted successfully\n");
  }
}
void pop()
{
    if(isEmpty())
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\ndeleted element = %d\n",s1.a[s1.top]);
        s1.top--;
    }
}

void disp()
{
    int i;

    for(i=s1.top; i>=0; i--)
    {
		   printf("\n%d",s1.a[i]);
    }
}

void main()
{
	int i,num;
	init();
	printf("\nenter 5 array elemants\n");
	for(i=0; i<5; i++)
	{
		printf("enter value :");
		scanf("%d",&num);
		push(num);
	}
	
	disp();
	pop();
	pop();
	disp();
}  
