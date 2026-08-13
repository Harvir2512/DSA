#include<stdio.h>
struct student
{
	int sno;
	char  sname[20];
	float per;
};
struct student s1[10];
void bubble_sort(int n)
{
	int i,j;
	float temp;
	char temp1[10];
	
	for(j=1; j<n; j++)
	{
		for(i=0; i<n-1; i++)
	    {
		    if(s1[i].per>s1[i+1].per)
		    {
			    temp=s1[i].per;
			    s1[i].per=s1[i+1].per;
			    s1[i+1].per=temp;
	        }
  		   if(s1[i].sname>s1[i+1].sname)
		    {
			   strcpy(temp1,s1[i].sname);
			   strcpy(s1[i].sname,s1[i+1].sname);
			   strcpy(s1[i+1].sname,temp1);
			  
			}

    	}
    }
	printf("\ndisplay sort persantage infromation\n");
	for(i=0; i<n; i++)
	{
		printf("\n%d",s1[i].sno);
		printf("\n%s",s1[i].sname);
		printf("\n%f",s1[i].per);
	}
	
}
void main()
{
	int i,n;
	printf("enter limit :");
	scanf("%d",&n);
	printf("\nenter student detiles\n");
	for(i=0; i<n; i++)
	{
		printf("enter  sno :");
		scanf("%d",&s1[i].sno);
		printf("enter  sname :");
		scanf(" %s", s1[i].sname);
		printf("enter persantage :");
		scanf("%f",&s1[i].per);
	}
	bubble_sort(n);
}
