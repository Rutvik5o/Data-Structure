#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};

struct node *temp,*top,*newnode;

void push()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nPush Element-> ");
  scanf("%d",&newnode->data);

  newnode->next=top;

  top=newnode;
}

void pop()
{
  temp=top;

  if(top==NULL)
  {
    printf("\nStack=>UnderFlow");
  }
  else
  {
  printf("\nPop Element-> %d",temp->data);

  top=top->next;
  free(temp);
  }
}

void peek()
{
  temp=top;

  if(top==NULL)
  {
    printf("\nStack=>UnderFlow");
  }
  else
  {
  printf("\nPeek Element-> %d",top->data);
  }
}

void display()
{
  temp=top;

  if(top==NULL)
  {
    printf("\nStack=>UnderFlow");
  }
  else
  {
    printf("\nElement's On Stack=> ");

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
   printf("\nChoose Operation On Stack(LinkList)=>\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
   scanf("%d",&choice);

   switch(choice)
   {
     case 1: push();
	     break;

     case 2: pop();
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

