#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
  int data;
  printf("\nEnqueue Element-> ");
  scanf("%d",&data);

  if(rear==N-1)
  {
    printf("\nQueue=>OverFlow");
  }
  else if(front==-1 && rear==-1)
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
  if(front==-1 && rear==-1)
  {
    printf("\nQueue=>UnderFlow");
  }
  else if(front==rear)
  {
    printf("\nDequeue Element=> %d",queue[front]);
    front=rear=-1;
  }
  else
  {
    printf("\nDequeue Element=> %d",queue[front]);
    front++;
  }
}

void peek()
{
  if(front==-1 && rear==-1)
  {
    printf("\nQueue=>UnderFlow");
  }
  else
  {
    printf("\nFront Element=> %d",queue[front]);
  }
}

void display()
{
  int i;

  if(front==-1 && rear==-1)
  {
   printf("\nQueue=>UnderFlow");
  }
  else
  {
   printf("\nElement's On Queue=> \n");

   for(i=front;i<=rear;i++)
   {
     printf("%d\n",queue[i]);
   }
  }
}

void main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On Queue(Array)=>\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
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

       default: printf("Invalid Operation");
    }

  }while(choice!=0);

  getch();
}

