#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[5],i;
	printf("entr 5no:");
	for( i=0;i<5;i++){
		scanf("%d",&arr[i]);
		
		
	}
	printf("elements in array:\n");
	for(i=0;i<5;i++){
		printf(" %5d",arr[i]);
	}
	printf("\nprint no in reverse order:\n");
	for(i=4;i>=0;i--){
		printf(" %d",arr[i]);
	}
	
	
	return 0;
}
