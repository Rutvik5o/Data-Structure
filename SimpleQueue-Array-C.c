// Simple Queue using Array

#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front= -1;
int rear= -1;


void enqueue()
{
	int data;
	
	printf("Enter the element in Queue-> ");
	scanf("%d",&data);
	
	if(rear==N-1)
	{
		printf("Queue-> OverFlow");
	}
	
	else if(front == -1 && rear == -1)
	{
	   front=rear=0;
	   
	   queue[rear]=data;
    }
    
    else
    {
    	rear++;
    	queue[rear]=data;
	}
}

void dequeue()
{
	
	if(front == -1 && rear == -1)
	{
		printf("Queue-> UnderFlow\n");
	}
	
	else if(front == rear)
	{
		printf("Dequeue Element is =>%d\n",queue[front]);
		front=rear=-1;
	}
	
	else
	{
		printf("Dequeue Element is =>%d\n",queue[front]);
		front++;
	}
}

void display()
{
	int i;
	
	if(front == -1 && rear == -1)
	{
		printf("Queue-> UnderFlow\n");
	}
	
	else
	
	{
		for(i=front;i<rear+1;i++)
		{
			printf("%d\n",queue[i]);
		}
	}

}

void peek()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue-> UnderFlow");
	}
	
	else
	{
		printf("Peek Item => %d\n",queue[front]);
	}
}

int main()
{
	int choice;
	
		printf("Queue Operation Your Choice\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
	
	do
	{
		printf("\nEnter Choice-> ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: enqueue();
			        break;
			        
			case 2: dequeue();
			        break;
			        
			case 3: peek();
			        break;
			    
			case 4: display();
			        break;
			
			case 5: exit(0);
			
			default: printf("Invalid Choice");
			   
		}
	}while(choice!=0);
	
	return 0;
}
