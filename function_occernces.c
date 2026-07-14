#include<stdio.h>
int show(int n,int a[],int key)
{
	int i,cnt=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	int i,n,a[10],key,ans;
	
	printf("enter limit :");
	scanf("%d",&n);
	printf("\nenter %d elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter serch occersces :");
	scanf("%d",&key);
	ans=show(n,a,key);
    printf("%d",ans);
}
