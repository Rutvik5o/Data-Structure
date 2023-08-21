#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define N 5
int stack[N];
int top=-1;

void push()
{
 int data;

 if(top==N-1)
 {
   printf("\nStack=>OverFlow");
 }
 else
 {
   printf("\nPush Element-> ");
   scanf("%d",&data);
   top++;
   stack[top]=data;
 }
}

void pop()
{
  if(top==-1)
  {
    printf("\nStack=>UnderFlow");
  }
  else
  {
    printf("\nPop Item-> %d",stack[top]);
    top--;
  }
}

void peek()
{
  if(top==-1)
  {
    printf("\nStack=>UnderFlow");
  }
  else
  {
    printf("\nTop Element=> %d",stack[top]);
  }
}

void display()
{
  int i;

  if(top==-1)
  {
   printf("\nStack=>UnderFlow");
  }
  else
  {
    printf("\nElement's On Stack=> \n");

    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
  }
}

void main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On Stack(Array)=>\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
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