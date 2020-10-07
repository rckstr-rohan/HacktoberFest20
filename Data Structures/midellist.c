#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
} *head;
void getmiddle();
void createlist(int);
void printlist();
void main()
{
	struct node *middle;
	head=NULL;
	createlist(10);
	createlist(20);
	createlist(200);
	createlist(30);
	createlist(40);
	createlist(50);
	createlist(60);
	createlist(70);
	createlist(80);
	createlist(900);
	printlist();
	printMiddleNode();
}
void createlist(int data)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->data=data;
	if(head==NULL)
	{
		head=newnode;
		
	}
	else 
	{
		newnode->next=head;
		head=newnode;
	}
}
void printlist()
{
	struct node *temp=head;
	printf("[");
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("]\n");
}
int getCount()
{
	struct node*temp=head;
	int count=0,mid=0,i=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void printMiddleNode()
{
	int i;
	struct node *temp=head;
	int count=getCount();
	for(i=1;i<count;i++)
	{
		temp=temp->next;
		if(i==(count/2))
		{
			printf("\n%d",temp->data);
		}
	}
}
void arrange()
{
	else if(temp->next!=NULL)
	{
		  temp=temp->next;
		while(temp->next!=NULL)
		{
			if(temp->data%2!=0)
			{
				temp1=temp->next;
				temp->next=head;
				head->next=temp1;
				head=teamp;
				temp1=NULL;
				
			}
		   
	    }
		
	}
}
