#include<stdio.h>
#include<string.h>
void main()
{
	char s1[][50]={"om","sai","ram","sham","aman"};
	char temp[50];
	int i,j;
	
	for(j=1; j<5; j++)
	{
		for(i=0; i<5-1; i++)
		{
			if(strcmp(s1[i],s1[i+1])>0)
			{
				strcpy(temp,s1[i]);
				strcpy(s1[i],s1[i+1]);
				strcpy(s1[i+1],temp);
			}
		}
	}
	
     printf("\nsorted string :");
     for(i=0; i<5; i++)
     {
     	printf("%s  ",s1[i]);
	 }
}
