  #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	int *addr;
	
}*temp,*newnode,*front,*rear;


void enque(int);
void dque();
void displayq();



int main() { 

	int n,ch;
	front=rear=NULL;

	
	do{
	
	printf("\n1-enque\n2-deque\n3-display\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter element");
			scanf("%d",&n);
			enque(n);
			break;
		case 2:
			dque();
			break;
		case 3:
			displayq();
			break;
		}
		
		
	printf("\nenter 1 to conti");
	scanf("%d",&ch); 
}while(ch==1);
	return 0;
}

void enque(int n){
	newnode=malloc(sizeof(struct node));
	newnode->data=n;
	newnode->addr=NULL;
	if((front==NULL)||(rear==NULL)){
		front=newnode;
		rear==newnode;
	}
	else{
		rear->addr=newnode;
		rear=newnode;
		
	}
		
}
void dque(){
	if(front==rear){
		temp=front;
		rear=NULL;
		front=NULL;
		printf("que is empty");
		}
	else{
		temp=front;
		printf("%ddeleted..",temp->data);
		front=front->addr;
		temp->addr=NULL;
		free(temp);
	}

	
}



void displayq(){
	printf("queue is...");
	for(temp=front;temp!=rear;temp=temp->addr){
		printf(" %d",temp->data);
	}

}
	

