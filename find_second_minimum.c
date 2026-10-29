#include<stdio.h>
void main()
{
	int a[100],i,n;
	int min=0,min2=0;
	printf("Enter Array Limit  :");
	scanf("%d",&n);
	
	printf("Enter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	min2=0;
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min2=min;
			min=a[i];
		}
		else if(a[i]<min2 && a[i]>min)
		{
			min2=a[i];
		}
    }
    
    printf("smalest second value=%d",min2);
}
