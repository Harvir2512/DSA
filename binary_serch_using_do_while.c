#include<stdio.h>
void binary_serch(char a[][30],int n)
{
	char b[20];
	int l,h,mid;
	char ch;
	do{
	
	 int f=0;
	printf("enter serch string :");
	scanf("%19s",b);
	
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(strcmp(a[mid],b)==0)
		{
			f=1;
			break;
		}
		if(strcmp(a[mid],b)<0)
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
	
	if(f==0)
	{
		printf("string is not found");
	}
	else
	{
		printf("string is found");
	}
	 printf("\nEnter Agin Serch Function(y/n):");
	 scanf(" %c",&ch);
   }while(ch=='y'||ch=='Y');
	
}
void main()
{
	char a[5][30];
//	char b[20];
	int i;
	
	printf("enter 5 strig :");
	for(i=0; i<5; i++)
	{
		scanf("%29s",a[i]);
	}
	
//	printf("enter serch string :");
//	scanf("%s",b);
//	
	binary_serch(a,5);
}
