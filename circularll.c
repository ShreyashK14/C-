#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int data;
	struct node *addr;
}*curr,*prev,*last,*newnode,*temp;
void create(int);
void display();
void insertfirst(int);
void insertmiddle(int,int);
void deletefirst();
void deletemiddle(int);
int main() {
	int n,ch,ele,pos;
	last=NULL;
	do{
	
	printf("1-create\n2-display\n3-insertfirst\n4-insertmiddle\n5-deletefirst\n6-daletemiddle\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter ele");
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
			printf("enter pos");
			scanf("%d",&pos);
			deletemiddle(pos);
			display();
			break;
	}
	printf("\nenter1 to conti");
	scanf("%d",&ch);
}while(ch==1);
return 0;
}
void create(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr=NULL;
	if(last==NULL){
		last=newnode;
		last->addr=last;
	}
	else{
		newnode->addr=last->addr;
		last->addr=newnode;
		last=newnode;
		
		
	}
	
}


void display(){
	if(last==NULL){
		printf("list empty");
		
	}
	
	else{
		curr=last->addr;
		
		while(curr!=last){
			
			printf("|%d|%u|->",curr->data,curr->addr);
			curr=curr->addr;
		}
		printf("|%d|%u|->\n",curr->data,curr->addr);
	}
}

void insertfirst(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr=last->addr;
	last->addr=newnode;
	
	
}

void insertmiddle(int ele,int pos){
	int cnt=1;
	curr=last->addr;
	prev=NULL;
	while(cnt<pos){
		prev=curr;
		curr=curr->addr;
		cnt++;
	}
	newnode=malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->addr=curr;
	prev->addr=newnode;
	
}


void deletefirst(){
	temp=last->addr;
	last->addr=temp->addr;
	temp->addr=NULL;
	
	free(temp);
}


void deletemiddle(int pos){
	int cnt=1;
	curr=last->addr;
	prev=NULL;
	while(cnt<pos){
		prev=curr;
		curr=curr->addr;
		cnt++;
	}
	prev->addr=curr->addr;
	free(curr);
}


