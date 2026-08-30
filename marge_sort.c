#include<stdio.h>
void marge_sort(int a[],int low,int high)
{
	int mid=0;
	
	if(low<high)
	{
		mid=(low+high)/2;
		marge_sort(a,low,mid);
		marge_sort(a,mid+1,high);
		sort(a,low,mid,high);
	}
}
void sort(int a[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	int temp[100];
	
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	for(i=low; i<=high; i++)
	{
		a[i]=temp[i];
	}
}
void main()
{
	int a[100],n,i;
	
	printf("enter limit :");
	scanf("%d",&n);
	
	printf("\nenter array elemats\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	marge_sort(a,0,n-1);
	
	printf("\nsorted array elemats=");
	for(i=0; i<n; i++)
	{
		printf("   %d",a[i]);
	}
}
