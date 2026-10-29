#include<stdio.h>
int main()
{
	int a[100],i,n;
	int cnt=0,j;
	printf("Enter Array Limit  :");
	scanf("%d",&n);
	
	printf("Enter Array Elmants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int num=0;
    for(i=0; i<n; i++)
    {
        num=a[i];
        for(j=i+1; j<n-i; j++)
        {
        	if(num==a[j])
    	    {
    		    cnt++;
		    }
	    }
    }
    
    printf("dublicnt elemants :%d",cnt);
    
    return 0;
}
