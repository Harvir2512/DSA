#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
}*newnode,*temp,*head;

int main()
{ 
   int i=0;
   
   head=NULL;
   temp=NULL; 
   
   for(i=0; i<5; i++)
    {
   	    newnode=malloc(sizeof(struct node));
   	 
   	    printf("Enter Data :");
   	    scanf("%d",&newnode->data);
   	 
   	    if(head==NULL)
   	    {
   	    	head=newnode;
   	 	    temp=newnode;
	    }
	    else
	    {
	    	temp->next=newnode;
	    	temp=newnode;
		}
		newnode->next=NULL;
    }
        temp=head;

        while(temp!=NULL)
        {
            printf("\nData = %d",temp->data);
            printf("\nNode address = %p",(void*)temp);
            printf("\nNext address = %p",(void*)temp->next);

            temp = temp->next;
        }
    return 0; 
}
