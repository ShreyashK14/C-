#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,*n,l,l1,new_l;
	printf("\nhow many no do you want");
	scanf("%d",&l);
	n=(int*)calloc(l,sizeof(int));
	printf("/nenter nos");
	for(i=0;i<l;i++){
	
	scanf("%d",(n+i));
	}
	printf("\nno are");
	for(i=0;i<l;i++){
		printf("%d",*(n+i));
	}
	printf("\n enter how many no to rellocate");
	scanf("%d",&new_l);
	n=(int*)realloc(n,new_l);
	l1=l;
	l=l+new_l;
	printf("\n enter elements");
	for(i=l1;i<l;i++){
		scanf("%d\n",(n+i));
		
	}
	printf("\nrellocated no ");
	for(i=l1;i<l;i++){
		printf("%d\n",*(n+i));
		
	}

	
	return 0;
}
