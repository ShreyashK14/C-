#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define max 20
int main() {
	int arr[max],i,n,ev=0,ov=0;
	printf("\nhow many no you want:");
	scanf("%d",&n);
	printf("entwer no...");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nno are ...");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			ev++;
			
		}
		else{
			ov++;
		}
		 
		
	}
	printf("\neven no are:%d",ev);
	printf("\nodd no are:%d",ov);
	
	
	
	
	return 0;
}
