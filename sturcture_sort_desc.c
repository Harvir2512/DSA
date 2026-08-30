#include<stdio.h>
#include<string.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1[10],temp;
void bubble_sort(int n)
{
	int i,j;
	
	for(j=1; j<n; j++)
	{
		for(i=0; i<n-j; i++)
		{
			if(strcmp(e1[i].ename,e1[i+1].ename)>0)
			{
				temp=e1[i];
				e1[i]=e1[i+1];
				e1[i+1]=temp;
			}
		}
	}
	printf("\nemployee ename sort structure\n");
	for(i=0; i<n; i++)
	{
		printf("\n%d",e1[i].eno);
		printf("\n %s",e1[i].ename);
		printf("\n%f",e1[i].sal);
	}
}
int main()
{
	int n,i;
	
	printf("enter limit :");
	scanf("%d",&n);
	
	printf("\nenter information to employee\n");
	for(i=0; i<n; i++)
	{
		printf("enter eno :");
		scanf("%d",&e1[i].eno);
		
		printf("enter ename :");
		scanf(" %s",e1[i].ename);
		
		printf("enter sal :");
		scanf("%f",&e1[i].sal);
	}
	bubble_sort(n);
}
