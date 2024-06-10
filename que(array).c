#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 5
	int que[max];
	int front=0,rear=0;
	void insertq(int);
	void deleteq();
	void displayq();
	
	
int main(){
	int n,ch;
	do{
	
	printf("\n1-insert\n2-delete\n-3display");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter no to insert");
			scanf("%d",&n);
			insertq(n);
			break;
		case 2:
			deleteq();
			break;
		case 3:
			displayq();
	}
	
printf("\nentr 1 to continue");
scanf("%d",&ch);

}while(ch==1);
return 0;
}
void insertq(int n){
	if(rear==max){
		printf("queue is full");
	}
	else{
		
		que[rear]=n;
		rear++;
	}
	}

void deleteq(){
	int d;
	if(front==rear){
		printf("queue is empty");
		
	}
	else{
		printf("deleted%d",que[front]);
		que[front]=0;
		front++;
	}
}
void displayq(){
	int i;
	printf("queue is...");
	for(i=front;i<rear;i++){
		printf(" %d",que[i]);
	}
}
