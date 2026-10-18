#include<stdio.h>
void liner_serch(int a[],int num,int n,int i)
{	

	if(i==n)
	{
		printf("number is not found");
		return;
		
	}
	if(a[i]==num)
	{
		printf("number is found");
		return;
	}
	
	liner_serch(a,num,n,i+1);
}
void main()
{
	int a[100],i,num,n;
	
	printf("Enter Limit :");
	scanf("%d",&n);
	
	printf("Enter Array Eelemants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("pass the number in serch to array :");
	scanf("%d",&num);
	
	liner_serch(a,num,n,0);
}
