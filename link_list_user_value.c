#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*newnode;
void main()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter data :");
    scanf("%d",&newnode->data);
    
    printf("data=%d",newnode->data);
}
