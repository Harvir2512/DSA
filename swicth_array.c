#include<stdio.h>

void main()
{
	int a[100],n;
	int i,ch;
	printf("Enter Limit :");
	scanf("%d",&n);
	
	printf("Enter Array Elemants :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
	printf("\npress 1: Serach To Number ");
	printf("\npress 2: Replace The Elemants ");
	printf("\npress 3: Exit");
	printf("\nEnter Your Chioce :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				int key,f=0;
				printf("\nEnter TO Serach the Elemants :");
				scanf("%d",&key);
				
				for(i=0; i<n; i++)
				{
					if(key==a[i]);
					{
						f=1;
					}
				}
				if(f==1)
				{
					printf("Elemants Found\n");
				}
				else
				{
					printf("Elemants Not Found\n");
				}
				break;
			}
		case 2:
			{
				int num,s;
				printf("\nEnter replace Elemants :");
				scanf("%d",&num);
				for(i=0; i<n; i++)
				{
					printf("%d\t",a[i]);
				}
				printf("\nKonta replace karna hai :");
				scanf("%d",&s);
				
				for(i=0; i<n; i++)
				{
					if(s==a[i])
					{
						a[i]=num;
					}
				}
				printf("\nArray Elemants :");
				for(i=0; i<n; i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			}
	}
     }while(ch<3);  
}
