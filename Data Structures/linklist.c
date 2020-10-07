#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
void creating();
void printlist();
void inserting();
int count();
void main()
{

	int s;
	char ch;
	head=NULL;
	start:
	printf("this form offers you various operations on list ::");
	printf("\nfor creating a List------------- press -->1\t" );
	printf("\nfor adding a node in list -------press -->2\t");
	printf("\nfor deleting the node in list -----press-->3\n");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
			up:
			creating();
			printlist();
			break;
			case 2:
				inserting();
				printlist();
				break;				

	}
	
	goto start;
}
void creating()
{
	int d;
	printf("enter the data");
	scanf("%d",&d);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=d;
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
	temp=head;
	printf("[");
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("]");
}
int count()
{
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void inserting()
{
	int d,i,pos,c;
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the positon of node\n");
	scanf("%d",&pos);
	c=count();
	printf("\nCount:: %d",c);
	printf("no.of nodes present =%d",c);
	if(pos<c && pos>1)
	{
		printf("enter the data");
		scanf("%d",&d);
		for(i=1;i<=(pos-1);i++)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		printlist();
		
	}
	else if(pos==1)
	{
		creating();
		printlist();
	}
	else if(pos==c)
	{
		printf("enter the data");
		scanf("%d",&d);
		temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		newnode->data=d;
		temp->next=newnode;
		newnode->next=NULL;
		printlist();
	}
	

}
