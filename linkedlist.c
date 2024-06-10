#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *addr;
}*newnode,*curr,*start,*prev,*ptr1,*ptr2,*ptr3;

void create(int);
void display();
void insertfirst(int);
void insertmiddle(int,int);
void deletefirst();
void deletemiddle(int);
void search(int);
void reverselist();



int main(){
	int n,ch,ele,pos,s;
	start=NULL;
	do{
		printf("\n1-create\n2-display\n3-insertfirst\n4-insertmiddle\n5-deletefirst\n6-deletemiddle\n7-search\n8-reverse linklist\n");
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
				printf("enter pos");
				scanf("%d",&pos);
				deletemiddle(pos);
				display();
				break;
			case 7:
				printf("enter ele to search");
				scanf("%d",&s);
				search(s);
				break;
			case 8:
				reverselist();
				display();
				break;
				
				
				
		}
		printf("\nenter 1 to continuw");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
}
void create(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr=NULL;
	if(start==NULL){
		start=newnode;
	}
	else{
		curr=start;
		while(curr->addr!=NULL){
			curr=curr->addr;
		}
		curr->addr=newnode;
	}
}
void display(){
	if(start==NULL){
		printf("list is empty");
		
	}
	else{
		curr=start;
		while(curr!=NULL){
			printf("%d|%u->",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}
void insertfirst(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr=start;
	start=newnode;
}

void insertmiddle(int ele,int pos){
	int cnt=1;
	curr=start;
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
	curr=start;
	start=start->addr;
	free(curr);
}
void deletemiddle(int pos){
	int cnt=1;
	curr=start;
	prev=NULL;
	while(cnt<pos){
		prev=curr;
		curr=curr->addr;
		cnt++;
		
	}
	prev->addr=curr->addr;
	free(curr);
}

void search(int s){
	int i=1;
	int flag=1;
	curr=start;
	while(curr!=NULL){
		if(curr->data==s){
			
			flag=1;
			break;
		}
		
		curr=curr->addr;
		i++;
}
if(flag==1){
	printf("%dno found t\at pos %d",s,i);
}
else{
	printf("no not found");
	
}
	
}
void reverselist(){
	ptr1=start;
	ptr2=ptr1->addr;
	ptr3=ptr2->addr;
	while(ptr3!=NULL){
		ptr2->addr=ptr1;
		ptr1=ptr2;
		ptr2=ptr3;
		ptr3=ptr3->addr;
	}
	ptr2->addr=ptr1;
	start->addr=NULL;
	start=ptr2;
}































































