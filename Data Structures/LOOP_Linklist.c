#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node *head,*temp,*newnode,*j,*s,*ref;
void create(int);
void printlist();

void is_loop(struct node *h) {
	j=s=h;
	do{
		j=j->next;
		s=s->next;
		if(s!=NULL) {
			s=s->next;
		}
	} while(j && s && j!=s);
	if(j==s){
		printf("loop found\n");
	}
	else  {
		printf("no loop \n;");
	}

	
} 

void main() {
	head=NULL;
	create(10);
	create(20);
	create(30);
	create(40);
	ref=head;
	head->next->next->next->next=head;
	is_loop(ref);
	
	printlist();
}

void create(int d) {
     newnode = (struct Node *)malloc(sizeof(struct Node));
     newnode->data=d;
     newnode->next=NULL;
     
	if(head==NULL) {
		head=newnode;
	}
	else {
		newnode->next=head;
		head=newnode;
		
	}
}

int x=5;
void printlist() {
	temp=head;
	while(x) {
		printf("%d--",temp->data);
		temp=temp->next;
		x--;
	}
}
