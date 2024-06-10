#include <stdio.h>
#include <stdlib.h>

/*     CIRCULAR   QUEUE                                                                               run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 5

int main() {
	int circq[5],ch,n,i,front=0,rear=0;
	do{
	
	printf("\n1-enque\n2-deque\n3-display\n");
	scanf("%d",&ch);
	
		switch(ch){
			case 1:
				
				printf("entr no in CIRCULAR QUE:");
				scanf("%d",&n);
				if(((rear==max-1)&&(front==0))||(front=rear+1)){
					printf("que is full");
				}
				else{
					if(rear=max-1)
					{
					
					rear=0;
					circq[rear]=n;}
					else{
						
					
					rear++;
				}
				}
				break;
			case 2:
				
				if(front==rear){
					printf("\ncirc que is empty");
				}
				else{
					printf("\ndequed element is%d",circq[front]);
					front++;
					
				}
				break;
			case 3:
			
			printf("\nno circq are");
		
			for(i=front;i!=rear;i++){
				printf("%d",circq[i]);
				if(i==max-1){
					i=0;
				}}
				
				printf("%d",circq[i]);
			break;
	}
		printf("\nenter 1 to conti..");
		scanf("%d",&n);
	}while(ch==1);


	return 0;
}
