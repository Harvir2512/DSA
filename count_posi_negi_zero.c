#include<stdio.h>
void main()
{
	int a[100],i,n;
	int poi=0,neg=0,ze=0;
	printf("Enter Array Limit  :");
	scanf("%d",&n);
	
	printf("Enter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]>0)
		{
			poi++;
		}
		if(a[i]<0)
		{
			neg++;
		}
		if(a[i]==0)
		{
			ze++;
		}
	}
	printf("\nposi Number=%d",poi);
	printf("\nnegi Number=%d",neg);
	printf("\nzero Number=%d",ze);
}
