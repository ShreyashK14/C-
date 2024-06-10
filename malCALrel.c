#include <stdio.h>
#include <stdlib.h>



void main() {
	int ch,*p;
	do{
	
	p=malloc(sizeof(int));
	printf("\nentr any  no");
	scanf("%d",p);
	printf("\n your no is:%d",*p);
	
	printf("\ndo you want to conti entr 1 ...");
	scanf("%d",&ch);
	
	}while(ch==1);
	getch();
	
	
	
	
}
