#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	
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
	printf("\nsorted array elemants\n");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
}
void binary(int a[],int n)
{
	int l,r,f=0,mid=0,num;
	
	l=0;
	r=n-1;
	
	printf("\nenter sarech kay :");
	scanf("%d",&num);
	while(l!=r)
	{
		mid=l+r/2;
		if(a[mid]==num)
		{
			f==1;
			break;
		}
		if(a[mid<num])
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if(f==1)
	{
		printf("recored found=%d",a[mid]);
	}
	else
	{
		printf("recored not found");
	}
}
void main()
{
	int n,i,a[100];
	
	printf("enter limit :");
	scanf("%d",&n);
    printf("\nenter array elemants\n");
    for(i=0; i<n; i++)
    {
    	scanf("%d",&a[i]);
	}
	sort(a,n);
	binary(a,n);
}
