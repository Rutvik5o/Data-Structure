#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};

struct node *front,*rear,*temp,*newnode;


void enqueue()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnqueue Element-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if(front==NULL && rear==NULL)
  {
    front=rear=newnode;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
  }
}

void dequeue()
{
  temp=front;

  if(front==NULL && rear==NULL)
  {
    printf("\nQueue=>UnderFlow");
  }
  else
  {
    printf("\nDequeue Element=> %d",front->data);
    front=front->next;
    free(temp);
  }
}

void peek()
{
  if(front==NULL && rear==NULL)
  {
    printf("\nQueue=>UnderFlow");
  }
  else
  {
    printf("\nFront Element=> %d",front->data);
  }
}

void display()
{
  temp=front;

  if(front==NULL && rear==NULL)
  {
    printf("\nQueue=>UnderFlow");
  }
  else
  {
    printf("\nElement's On Queue=> ");

    while(temp!=0)
    {
      printf("%d\n",temp->data);
      temp=temp->next;
    }
  }
}

void main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On Queue(LinkList)=>\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
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