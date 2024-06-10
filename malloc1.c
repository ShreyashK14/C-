#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,*n,x;
	printf("\nentr how many no do you want..");
	scanf("%d",&x);
	n=(int*)malloc(sizeof(int)*x);
	printf("\nenter no..");
	for(i=0;i<x;i++){
		scanf("%d",(n+i));
	}
	printf("\nyour no are");
	for(i=0;i<x;i++){
		printf("%2d",*(n+i));
		
	}
	//free()
/*	for(i=0;i<x;i++){
		printf("\nin free %d",*(n+i));
		free(n+i);
	}
	printf("\nno after free");
	for(i=0;i<x;i++){
		printf("%2d",*(n+i));
	}
	
	getch();
}*/

