// Circular Queue Using Array

#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
	
	int data;
	
	printf("Enter the element in Circular Queue-> ");
	scanf("%d",&data);
	
	if(front == -1 && rear == -1)
	{
		front=rear=0;
		queue[rear]=data;
	}
	
	else if( ((rear+1)%N)== front)
	{
		printf("Circular Queue-> OverFlow");
	}
	
	else
	{
		rear=(rear+1)%N;
		queue[rear]=data;
	}
}

void dequeue()
{
	
	if(front == -1 && rear == -1)
	{
		printf("Circular Queue-> UnderFlow");
	}
	
	else if (front == rear)
	{
		printf("Dequeue Element-> %d",queue[front]);
		front = rear = -1;
	}
	
	else
	{
		printf("Dequeue Element-> %d",queue[front]);
		front = (front+1)%N;
	}
}

void display()
{
	int i=front;
	
	if(front == -1 && rear == -1)
	{
		printf("Circule Queue-> UnderFlow");
	}
	
	else
	{
		while(i!=rear)
		{
			printf("%d\n",queue[i]);
			i=(i+1)%N;
		}
		
		printf("%d\n",queue[rear]);
	}
}

void peek()
{
	if(front == -1 && rear == -1)
	{
		printf("Circular Queue-> Underflow");
	}
    else
    {
    	printf("Peek Item=> %d",queue[front]);
	}
}


int main()
{
	int choice;
	
	printf("Circular Queue Operation's Choice\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
	
	do{
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
