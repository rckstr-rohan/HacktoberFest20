#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int top1=-1;
int stack[size];

struct node
{
	int data;
	struct node *next;
} *top;
void createstack(int);
void push(int);
void pop();
void printlist();
int peek();
void pushstack(int);
void popstack();
int peekstack();
void printstack1();
void main()
{
 int x;
 /*createstack(100);
 push(200);
 push(240);
 push(1500);
 printstack();
 pop();
 printstack();
 x=peek();
 printf("\n peek value = %d",x);
 */
 pushstack(1234);
 pushstack(1147);
 pushstack(369);
 pushstack(852);
 printstack1();
 popstack();
 peekstack();
printstack1();

}
void createstack(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(top==NULL)
	{
		top=newnode;
	}

}	
void push( int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->next=top;
	top=newnode;
}
void printstack()
{
	struct node *temp;
	temp=top;
    printf("printing stack\n");
	while(temp!=NULL)
	{
	  printf("%d-->",temp->data);
	  temp=temp->next;
	}
	printf("}");
	printf("top is =%d",top->data);
}
void pop()
{
	top->data=NULL;
	top=top->next;
	printf("\ncurrent top =%d ",top->data);
	
}
int  peek()
{
   int t=top->data;
   return t;
}
void pushstack(int data)
{
	int i;
	if(top1<10)
	{
	top1++;
	stack[top1]=data;
	}
	else
	printf("\nstack full");
	
}
void popstack()
{
	if(top1==-1)
	{
		printf("stackempty\n");
	}
	else if(top1==size-1)
	{
		printf("stack full\n");
	}
	else if(top1<size)
	{
		stack[top1]=NULL;	
	}
	else
	printf("enter a valid no.");
}
int peekstack()
{
		if(top1==-1)
	{
		printf("stackempty\n");
	}
	else if(top1==size-1)
	{
		printf("stack full\n");
	}
	else	
		return stack[top1];
}
void printstack1()
{
	int i;
	printf("\n[ ");
	for(i=0;i<=top1;i++)
	{
		printf("%d\n",stack[i]);
	}
	printf("]");
}

