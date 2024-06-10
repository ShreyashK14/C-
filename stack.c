#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 5
int main() {
	int stack[max],i,n,ch,top=-1;
	
	do{
	printf("\n1-push\n2-pop\n3-display\n");
	scanf("%d",&ch);

	switch(ch){
		case 1:
			printf("\nenter ele to push");
			scanf("%d",&n);
				
			if(top==(max-1)){
				printf("\nstack is full");
		
	}
	
			else {
				stack[++top]=n;
				printf("%d pushed",stack[top]);
	}
			
			break;
		case 2:
			if(top==-1){
				printf("\nstack is empty");
			}
			else{
				printf("%d popped",stack[top]);	
				stack[top]=0;
				top--;
					}
			break;
		case 3:
			printf("\nstack is");
			for(i=top;i!=-1;i--){
				printf(" %d",stack[i]);
			}
	}
	
	
	printf("\nenter 1 to continue");
	scanf("%d",&ch);
}while(ch==1);
	return 0;



}

