#include<stdio.h>
void main()
{
	float r,b,h,ans=0;
	int ch;
	
 do{
 	printf("\n");
    printf("\npress1: area of cricle");
	printf("\npress2: area of cricamfarmce");
	printf("\npress3: area of tringle");
	printf("\npress4: area of shpere");
	printf("\npress5: EXIT the output");
	printf("\nenter your choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				printf("enter redius :");
				scanf("%f",&r);
				
				ans=3.14*r*r;
				printf("area of cricle=%f",ans);
				break;
			}
		case 2:
			{
				printf("enter redius :");
				scanf("%f",&r);
				ans=2*3.14*r;
				printf("area of circamfarce=%f",ans);
				break;
			}
		case 3:
			{
				printf("enter base & hegit :");
				scanf("%f%f",&b,&h);
				
				ans=0.5*b*h;
				printf("area of tringle=%f",ans);
				break;
			}
		case 4:
			{
				printf("enter redius :");
				scanf("%f",&r);
				
				ans=4*3.14*r*r;
				printf("area of shpere=%f",ans);
				break;
			}
			default:
			{
				printf("inviled choice");
			}
	}
  }while(ch<5);
}
