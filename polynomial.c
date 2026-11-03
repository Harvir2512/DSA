#include<stdio.h>
void main()
{
    int a[10],n,i;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Enter coefficients: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Polynomial: ");

    for(i=0;i<n;i++)
    {
        printf("%dx^%d",a[i],n-i-1);

        if(i<n-1)
            printf("+");
    }
}
