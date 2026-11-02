#include<stdio.h>
#include<string.h>
void main()
{
    char a[10][30],name[30];
    int n,i,flag=0;

    printf("Enter limit: ");
    scanf("%d",&n);

    printf("Enter names: ");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }

    printf("Enter name to search: ");
    scanf("%s",name);

    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],name)==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("Name Found");
    else
        printf("Name Not Found");
}
