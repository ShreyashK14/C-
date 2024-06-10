#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *addrl,*addrr;
}*root,*p,*q;

struct node *make(int y){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=y;
	newnode->addrl=newnode->addrr=NULL;
	return(newnode);
}

void left(struct node *r,int x){
	if(r->addrl!=NULL){
		printf("\ninvalid");
	}
	else{
		r->addrl=make(x);
	}
	
}
void right(struct node *r,int x){
	if(r->addrr!=NULL){
		printf("\ninvalid");
	}
	else{
		r->addrr=make(x);
	}
	
}
void inorder(struct node *r){
	if(r!=NULL){
		inorder(r->addrl);
		printf("\t %d",r->data);
		inorder(r->addrr);
		
	}
}
void preorder(struct node *r){
	if(r!=NULL){
		printf("\t %d",r->data);
		preorder(r->addrl);
	
		preorder(r->addrr);
}
}
void postorder(struct node *r){
	if(r!=NULL){
		postorder(r->addrl);
		
		postorder(r->addrr);
		printf("\t %d",r->data);
		}
		}

void create(){
	int no;
	char choice='y';
	printf("\nenter the root");
	scanf("%d",&no);
	root=make(no);
	p=root;
	
	while(choice ='y'||choice ='y'){
		printf("\nenter next number");
		scanf("%d",&no);
		if(no==-1){
			break;
	}
		p=root;
		q=root;
		while(no!=p->data&&q!=NULL){
			p=q;
			if(no<p->data){
				q=p->addrl;
			}
			else{
				q=p->addrr;
			}
			
		}
		if(no<p->data){
			printf("left branch %dof%d\n",p->data,no);
			left(p,no);
		}
		else{
			right(p,no);
			printf("right branch of %dis %d\n",p->data,no);
			
		}
		printf("\t\ncntinue");
		scanf("%c",&choice);
	}
}
int main() {
	int no,ch;
	do{
	
	{
		printf("\n1-create\n2-inorder traversal\n3-preorder traversal\n4-postorder traversal\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				printf("\ninorder traversal is\n");
				inorder(root);
				break;
			case 3:
				printf("\npreorder traversal is\n");
				preorder(root);
				break;
			case 4:
				printf("\npostorder traversal is\n");
				postorder(root);
				break;
		}
		printf("\nenter 1 to contii");
	}while(ch==1);
	 
	return 0;
}
