#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *addrnext;
	struct node *addrprev;
}*start,*newnode,*curr,*last,*prev;
void create(int);
void display();
void insertfirst(int);
void insertmiddle(int,int);
void deletefirst();
void deletemiddle(int);
int main(){
	int n,ch,ele,pos;
	start=NULL;
	do{
		printf("\n1-create\n2-display\n3-insertfirst\n4-insertmiddle\n5-deletefirst\n6-deletemiddle\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter no");
				scanf("%d",&n);
				create(n);
				display();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("enter first node");
				scanf("%d",&n);
				insertfirst(n);
				display();
				break;
			case 4:
				printf("enter ele and pos");
				scanf("%d%d",&ele,&pos);
				insertmiddle(ele,pos);
				display();
				break;
			case 5:
				deletefirst();
				display();
				break;
			case 6:
				printf("enter pos to delete");
				scanf("%d",&pos);
				deletemiddle(pos);
				display();
				break;
				
		}
	printf("\nenter 1 to continue");
	scanf("%d",&ch);
		
	}while(ch==1);
}
void create(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addrprev=NULL;
	newnode->addrnext=NULL;
	if(start==NULL){
		start=newnode;
		last=newnode;
		
	}
	else{
		last->addrnext=newnode;
		newnode->addrprev=last;
		last=newnode;
	}
}

void display(){
	if(start==NULL){
		printf("list is empty");
	}
	else{
		curr=start;
		while(curr!=NULL){
			printf("|%u|%d|%u|->",curr->addrprev,curr->data,curr->addrnext);
			curr=curr->addrnext;
		}
	}
}


void insertfirst(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addrnext=start;
	start->addrprev=newnode;

	start=newnode;
	start->addrprev=NULL;
	
}

void insertmiddle(int ele,int pos){
	int cnt=1;
	curr=start;
	prev=NULL;
	while(cnt<pos){
		prev=curr;
		curr=curr->addrnext;
		cnt++;
	}
	newnode=malloc(sizeof(struct node));
	newnode->data=ele;
	
	newnode->addrprev=prev;
	prev->addrnext=newnode;
	newnode->addrnext=curr;
	curr->addrprev=newnode;
}

void deletefirst(){
	curr=start;
	start=start->addrnext;
	start->addrprev=NULL;
	curr->addrnext=NULL;
	free(curr);
}


void deletemiddle(int pos){
	int cnt=1;
	curr=start;
	prev=NULL;
	while(cnt<pos){
		prev=start;
		curr=curr->addrnext;
		cnt++;
	}
	prev->addrnext=curr->addrnext;
	curr->addrnext->addrprev=prev;
	free(curr);
	
}
