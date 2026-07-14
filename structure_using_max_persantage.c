#include<stdio.h>
struct student
{
	int sno;
	char name[20];
	float per;
}s1[10];
int n;
void detlis()
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("student roll number :");
		scanf("%d",&s1[i].sno);
		
		printf("student name :");
		scanf("%s",s1[i].name);
		
		printf("student persantage :");
		scanf("%f",&s1[i].per);
	}
}
void max()
{
	int i,max=0;
	for(i=0; i<n; i++)
	{
		if(s1[i].per>max)
		  max=s1[i].per;
	}
	printf("maximum persantage=%f",max);
}
void main()
{
	int n;
	printf("enter student limit :");
	scanf("%d",&n);
	detlis();
	max();
}
