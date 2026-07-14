#include<stdio.h>
struct emp
{
	int eno;
	char name[20];
	float sal;
};
struct emp * e1;
void accept()
{
	printf("enter emp number :");
	scanf("%d",&e1->eno);
	printf("enter emp name :");
	scanf("%s",e1->name);
	printf("enter emp sal :");
	scanf("%f",&e1->sal);
}
void disp()
{
	printf("\nemployee number :%d",e1->eno);
	printf("\nemployee name :%s",e1->name);
	printf("\nemployee salary :%f",e1->sal);
}
void main()
{
	e1=(struct emp *)malloc(sizeof(struct emp));
	accept();
	disp();
}
