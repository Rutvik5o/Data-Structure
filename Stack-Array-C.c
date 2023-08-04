#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int item;

    if (top == N - 1)
	{
        printf("Stack -> OverFlow\n");
    } 
	else
	{
        printf("Enter item into Stack-> ");
        scanf("%d", &item);

        top++;
        stack[top] = item;
    }
}

void pop()
 {
    int item;

    if (top == -1)
    { 
        printf("Stack -> UnderFlow\n");
        
    }
	else
	{
        item = stack[top];
        top--;

        printf("Popped Item is -> %d\n", item);
    }
}

void peek()
 {
    int item;

    if (top == -1)
	{
        printf("Stack -> UnderFlow\n");
    } 
	else
	{
        printf("Top Most Element In Stack -> %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
	{
        printf("Stack is empty\n");
    } 
	else
	{
	 
        printf("Items in Stack Are=> \n");
        
        for (i = top; i >= 0; i--)
		{
            printf("%d\n", stack[i]);
        }
    }
}

int main() 
{
    int ch;

    printf("Stack Operations with Choices\n1.Push\n2.Pop\n3.Peek\n4.Display\n0.Exit\n");

    do {
        printf("Enter Your Choice=> ");
        scanf("%d", &ch);

        switch (ch)
		{
            case 1: push();
                break;

            case 2: pop();
                break;

            case 3: peek();
                break;

            case 4: display();
                break;

            case 0: exit(0);

            default:
                printf("Invalid Choice\n");
        }
    } while (ch != 0);

    return 0;
}

