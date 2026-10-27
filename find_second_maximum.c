#include<stdio.h>
void main()
{
	int a[100],n,i,j;
	int max=0,max2=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	
	printf("Enter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	max2=-1;
	
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max2=max;
			max=a[i];
	    }
	    else if(a[i]>max2  && a[i]<max)
	    {
				max2=a[i];
		}
   }
	printf("second max=%d",max2);
	
}
