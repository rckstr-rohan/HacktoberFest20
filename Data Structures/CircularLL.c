#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
}*head;
void createList(int);
void printList();
void main()
{
	head = NULL;
	createList(10);
	createList(10);
	createList(30);
	createList(40);
	createList(100);
	createList(100);
	createList(302);
	createList(403);
	printList();
}
void printList()
{
	struct node *temp=head;
	while(temp->next!=head)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("%d->",temp->data);
}
void createList(int data)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head == NULL)
	{
		head = newNode;
		head->next=head;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=head)
		{
			temp = temp->next;
		}
		newNode->prev=temp;
		temp->next=newNode;
		newNode->next=head;
	}
}
