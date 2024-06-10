#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int *p,i,n;
	printf("\nho many no do you want");
	scanf("%d",&n);
		p=(int*)malloc(sizeof(int)*n);
		printf("\nenter numbers");
		for(i=0;i<n;i++){
			scanf("%d",(p+i));
		}
		printf("\nno are");
		for(i=0;i<n;i++){
			printf("%d",*(p+i));
		}
		
		/*for(i=0;i<n;i++){
			printf("\nin free%d",*(p+i));
		    free(n+i);
			
		}
		printf("\nno after free");
		for(i=0;i<n;i++){
			printf("%d",*(p+i));
			
		}*/
	getch();
}
