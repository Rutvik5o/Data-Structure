#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* top;
};

struct node* top = NULL;

void push();
void display();
void peek();
void pop();

int main()
{
    int choice;
    int x;

    do
    {
        printf("\nChoice According \nPress 1 for Push\nPress 2 for Pop\nPress 3 for Peek\nPress 4 for Display\nPress 5 For exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &x);
            printf("___________________________________");
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (choice != 0);
    

    return 0;
}

void push(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->top = top;
    top = newnode;
}

void display()
{
    struct node* temp = top;
    if (temp == NULL)
    {
        printf("Stack is Empty\n");
        printf("___________________________________");
    }
    else
    {
    	printf("___________________________________");
        printf("\nElements in Stack are:\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->top;
        }
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("The data at the top of the Stack is -> %d\n", top->data);
        printf("___________________________________");
    }
}

void pop()
{
    struct node* temp;
    int x;
    temp = top;
    if (temp == NULL)
    {
        printf("Stack is Empty:UnderFlow\n");
    }
    else
    {
        x = temp->data;
        printf("The Popped Data is -> %d\n", x);
        printf("___________________________________");
        top = temp->top;
        free(temp);
    }
}

