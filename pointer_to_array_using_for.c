#include<stdio.h>
int main()
{
	int a[7]={10,20,30,40,50,60,70};
	
	int (*p)[7],i;
	
	p=&a;
	
	for(i=0; i<7; i++)
	{
		printf("%d   ",(*p)[i]);
	}
}
