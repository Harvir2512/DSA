#include<stdio.h>
int main()
{
	int num,num1;
	int s=0,d=0;
	printf("Enter Number :");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		d=num%10;
		s=s*10+d;
		num=num/10;
	}
	
	if(s==num1)
	{
		printf("Palidrome Number=%d",s);
	}
	else
	{
		printf("Not Palidrome Number=%d",s);
	}
}
