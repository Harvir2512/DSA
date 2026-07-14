#include<stdio.h>
void sarchdata(int n,int a[],int num)
{
	int i,f=0;
	for(i=0; i<n; i++);
	{
		if(a[i]==num)
		{
			f=1;
		}
	}
	if(f==1)
	  {
	     printf("data found");
	  }
	else
	 {
	     printf("not data found");
     }
}
int main()
{
	int a[10],n,i,num;
	printf("enter limit  :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter serach number :");
	scanf("%d",&num);
	sarchdata(n,num,a);
}
