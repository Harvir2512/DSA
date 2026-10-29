#include<stdio.h>
void main()
{
    int a[100],i,j,n,count;

    printf("Enter Array Limit: ");
    scanf("%d",&n);

    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        count=0;

        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        printf("\n%d occurs %d times",a[i],count);
    }
}

