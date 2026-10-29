#include<stdio.h>
void main()
{
	int a[100],i,n;
	int j,temp;
	printf("Enter Array Limit  :");
	scanf("%d",&n);
	
	printf("Enter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0; j<n; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
    }
    
    for(i=0; i<n; i++)
    {
    	printf("\t%d",a[i]);
	}
    
}
