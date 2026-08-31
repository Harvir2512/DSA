#include<stdio.h>
void main()
{
	int a[100],i,n,j,temp=0,index=0,min=0;
	
	printf("enter limit :");
    scanf("%d",&n);
    printf("\nenter array elemants :");
    for(i=0; i<n; i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		min=a[i];
	    index=i;
	    for(j=i; j<n; j++)
	    {
	    	if(min>a[j])
	    	{
	        	min=a[j];
	        	index=j;
		    }
		}
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
	printf("\ndisplay sorted array :");
	for(j=0; j<n; j++)
	{
		printf("%d\t",a[j]);
	}
}
