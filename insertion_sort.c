#include<stdio.h>
void main()
{
	int a[100],i,n,temp,j;
	printf("enter limit :");
	scanf("%d",&n);
	
	printf("\nenter array elemants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1; i<n; i++)
	{
		temp=a[i];
		for(j=i-1; j>=0; j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=temp;
	}
	printf("\ndisplay sorted array :");
	for(i=0; i<n;  i++)
	{
		printf("%d\t",a[i]);
	}
}

