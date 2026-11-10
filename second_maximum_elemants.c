#include<stdio.h>
void main()
{
	int a[100],n,i,j;
    int max1=0,max2=0;
    
    printf("Enter Array Limit :");
    scanf("%d",&n);
    
    printf("\nEnter Array Elemants :");
    for(i=0; i<n; i++)
    {
    	scanf("%d",&a[i]);
	}
	
	max1=a[0];
	max2=-99999;
	
	for(i=0; i<n; i++)
	{
		if(max1<a[i])
		{
			max2=max1;
			max1=a[i];
		}
		
		else if(max2<a[i] && a[i]<max1)
		{
			max2=a[i];
	    }
	}
	
	printf("Second maximum =%d",max2);
}
