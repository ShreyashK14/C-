#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int *p,n,i,nn,n1;
	printf("\nentr total numbers");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("\nenter nos");
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("\nno are");
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	printf("\nrealloc more no");
	scanf("%d",&nn);
	p=(int*)realloc(p,nn);
	n1=n;
	n=n+nn;
	printf("\nenter numbers");
	for(i=n1;i<n;i++){
		scanf("%d",(p+i));
		
	}
	
	printf("\nafter relocation");
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	
	
	return 0;
}
