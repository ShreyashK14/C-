#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *addr;
}*newnode,*top,*temp;



int main() {
	int n,ch,i;
	top=NULL;
	do{
	
	printf("\n1-push\n2-pop\n3-display\n");
	scanf("%d",&ch);
	
	
	switch(ch){
		case 1:
			printf("enter no to push");
			scanf("%d",&n);
			if(top==NULL){
			
			top=malloc(sizeof(struct node));
			top->data=n;
			top->addr=NULL;
			 }
			else {
				newnode=malloc(sizeof(struct node));
				newnode->data=n;
				newnode->addr=top;
				top=newnode;
				
				
			}
			
			
			
			break;
		case 2:
			if(top==NULL){
				printf("stack is empty");
			}
			else{
				ch=top->data;
				temp=top;
				top=top->addr;
				temp->addr=NULL;
				free(temp);
				printf("poped%d",ch);
			}
			break;
		case 3:
			printf("stack is");
			temp=top;
			while(temp!=NULL){
				printf(" \n%d",temp->data);
				temp=temp->addr;
				
			}
		
			break;
	}
	printf("\nenter 1 to continue ");
	scanf("%d",&ch);
}while(ch==1);
	return 0;
}

