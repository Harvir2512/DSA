#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50];
	int i;
	printf("enter string :");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]==' ')
	    	s1[i]='*';
		
	}
	printf("every space replaced=%s",s1);
}
