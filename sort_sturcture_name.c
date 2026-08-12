#include<stdio.h>
#include<string.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
};
struct emp e1[10];
void sort(int n)
{
	int i,step;
	char temp[30];
	
    for(step=1; step<n; step++)
	{
	    for(i=0; i<n-1; i++)
	    {
		    if(strcmp(e1[i].ename,e1[i+1].ename)>0)
		    {
			    strcpy(temp,e1[i].ename);
			    strcpy(e1[i].ename,e1[i+1].ename);
			    strpcy(e1[i+1].ename,temp);
		   }
	    }
	}
    printf("display detils\n");
	for(i=0; i<n; i++)
	{
		printf("\n%d",e1[i].eno);
		printf("\n%s ",e1[i].ename);
		printf("\n%f",e1[i].sal);
	}
}
void main()
{
	int n,i;
	
	printf("enter limit :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter eno :");
		scanf("%d",&e1[i].eno);
		printf("enter ename :");
		scanf("  %s",e1[i].ename);
		printf("enter sal :");
		scanf("%f",&e1[i].sal);
	}
	sort(n);
}
