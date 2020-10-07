#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
} *front,*reare;
void createqueue(int);
void enqueue(int);
void main()
{
	front=NULL;
	reare=NULL;
	createqueue(90);
	createqueue(5001);
	enqueue(456);
	printqueue();
	dequeue();
	printqueue();
}
void createqueue(int data)
{
	if(front==NULL||reare==NULL)
	{
       struct node *newnode=(struct node *)calloc(1,sizeof(struct node));
	   newnode->data=data;
	   newnode->next=NULL;
	   front=newnode;
	   reare=newnode;
	}
	else
	enqueue(data);
}
void enqueue(int data)
{
	struct node *newnode=(struct node *)calloc(1,sizeof(struct node));
	   newnode->data=data;
	   newnode->next=NULL;
	   reare->next=newnode;
	   reare=newnode;
}
void dequeue()
{
	front=front->next;
}
void printqueue()
{
	struct node *temp=front;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("}");
}
