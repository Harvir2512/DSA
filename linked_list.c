#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
}*newnode;

int main()
{ 
   	newnode=malloc(sizeof(struct node));
   	 
   	printf("Enter Data :");
   	scanf("%d",&newnode->data);
	
	newnode->next=&newnode->next;
	
	printf("Node data :%d",newnode->data);
    printf("\nNext Node Address=%d",newnode->next); 	    
   
}
