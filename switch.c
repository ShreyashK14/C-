#include <stdio.h>
int main(){
	int i,n;
	menu:
	printf("enter no");
	scanf("%d",&i);
	
	switch(i){
	
	case 1:
	printf("monday");
	break;
	
	case 2:
	
		printf("tuesday");
		break;
	
	case 3:
		printf("wednesday");
		break;
			
	
	case 4:
		printf("thursday");
		break;
	
	case 5:
		printf("friday");
		break;
	
	case 6:
		printf("satday");
		break;
	
	case 7:
		printf("sunday");
		break;
	
	default:
		printf("Enter no from 1to7");
	}
	printf("\nto conti enter 1:");
	scanf("%d",&n);
	if(n==1){
	
	goto menu;
	}
	return 0;
}
