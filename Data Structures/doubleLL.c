#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node*next;
	
} *head;
void createlist(int);
void printlist();
void reverseprint();
void main()
{
	head=NULL;
	printf("double linklist \n");
	createlist(10);
	createlist(20);
	createlist(30);
	createlist(40);
	printlist();
	reverseprint();
}
void createlist(int data)
{
	struct node*newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
}
void printlist()
{
	struct node *temp;
	temp=head;
	printf("[");
	while(temp!=NULL)
	{
		temp=temp->next;
		printf("%d<-->",temp->data);
	}
	printf("]");
}
void reverseprint()
{
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		
	}
	printf("reverse order \n{");
	while(temp!=NULL)
	{
		printf("%d--",temp->data);
		temp=temp->prev;
	}
	printf("}");
	
}
