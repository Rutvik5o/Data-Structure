// Simple Queue -> Simply LinkList
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int new_data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = new_data;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct node *temp;

    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        temp = front;
        printf("Queue: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void dequeue()
{
    struct node *temp;

    if (front == NULL && rear == NULL)
    {
        printf("UnderFlow\n");
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Front element: %d\n", front->data);
    }
}



int main()
{
    int choice, new_data;

    while (1)
    {
       printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n5. Peek\n");
       printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &new_data);
            enqueue(new_data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program\n");
            exit(0);
            
        case 5:
        	peek();
        	break;
        	
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

