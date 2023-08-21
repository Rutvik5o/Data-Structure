#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *temp,*newnode,*head;


void CreateNode()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnter Data-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if(head==0)
  {
    head=temp=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
}

void InsertAtFirst()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnter Data At First-> ");
  scanf("%d",&newnode->data);

  newnode->next=head;
  head=newnode;
}

void DeleteAtFirst()
{
  temp=head;
  printf("\nDeleted First Element=> %d",temp->data);
  head=head->next;
  free(temp);
}

void display()
{
  temp=head;

  printf("\nElement's On LinkList=> \n");

  while(temp!=0)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}

void InsertAtGivenPosition()
{
  int position;
  int i;

  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnter Insert After Position-> ");
  scanf("%d",&position);

  temp=head;

  for(i=0;i<position-1;i++)
  {
    temp=temp->next;                  

  }

  printf("\nEnter Data-> ");
  scanf("%d",&newnode->data);
  newnode->next=temp->next;
  temp->next=newnode;
}

void main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On LinkList=>\n1.Create A Node\n2.Insert At First\n3.Insert At Given Position\n4.Delete At First\n5.Display\n6.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1: CreateNode();
	      break;

      case 2: InsertAtFirst();
	      break;

      case 3: InsertAtGivenPosition();
	      break;

      case 4: DeleteAtFirst();
	      break;

      case 5: display();
	      break;

      case 6: exit(0);

      default: printf("Invalid Operation");

      }
  }while(choice!=0);

  getch();
}