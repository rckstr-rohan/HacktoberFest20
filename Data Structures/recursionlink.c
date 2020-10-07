#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
} *head;
void create_link(int);
void printlist();
int count(struct node *head);
void search(int );
int recsearch(struct node *,int);
void main()
{
	head=NULL;
	create_link(10);
	create_link(20);
	create_link(30);
	create_link(40);
	create_link(50);
	printlist();
	int c=count(head);
	printf("\n%d",c);
	search(50);
	int i=recsearch(head,20);
	if(i==1)
	printf("yes found\n");
	else
	printf("no");
}
void create_link(int data)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
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
	struct node *temp;
	temp=head;
	printf("{");
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("}");
}
int count(struct node *head)
{
	if(head==NULL)
	return 0;
	return 1+count(head->next);
}
void search(int key)
{
	struct node *current=head;
	while(current!=NULL)
	{
		if(current->data==key)
		{
			printf("yes found\n");
			break;		
		}
		current=current->next;
	}
}
int recsearch(struct node *head,int key)
{
    if(head->data==key)
	return 1;
	if(head==NULL)
	return 0;
	recsearch(head->next,key);
}
