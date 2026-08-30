#include<stdio.h>
void main()
{
	int a[100],i,j,n,min,temp;
	
	printf("enter limit :");
	scanf("%d",&n);
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	
	printf("\nsorted array elemants:");
	for(i=0; i<n; i++)
	{
		printf("%d   ",a[i]);
	}
}

