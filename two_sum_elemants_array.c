#include<stdio.h>
int main()
{
	int a[100],i,j,n;
	int tar=0,low=0,high=0,sum=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	
	printf("\nEnter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter Target to Array :");
	scanf("%d",&tar);
	
	low=0;
	high=n-1;
	
	while(low<high)
	{
		
		sum=a[low]+a[high];
		
		if(sum==tar)
		{
			printf("[%d,%d]",low,high);
		}
		if(sum<tar)
		{
			low++;
		}
		else
		{
			high--;
		}
	}
}
