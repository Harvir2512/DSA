
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void create()
{
    struct node *newnode, *temp;
    int choice = 1;

    while(choice == 1)
    {
        newnode = malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = head;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        temp->next = head;

        printf("Continue? (1/0): ");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = head;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }while(temp != head);

    printf("(Head)");
}

void insert_end()
{
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;

    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        temp = head;

        while(temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert at End");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insert_end();
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice != 4);

    return 0;
}

