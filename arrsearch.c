#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 20
int main() {
	int arr[5],i,s;
	int flag=0;
	
	printf("enter 5 no :");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("/nEnter no to search");
	scanf("%d",&s);
	for(i=0;i<5;i++){
	
	
	
		if(arr[i]==s){
			flag=1;
			
			break;
		}}
	if(flag==1){
			printf("no is found");
		}
	else{
		printf("no not found");
	}
		
		
		
		
			
		
		
	
	
	return 0;
}
