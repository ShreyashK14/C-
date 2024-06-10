#include <stdio.h>
int main(){
	int k,j,i;
	k=65;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c",k);
			
		}
		k++;
		printf("\n");
		
	}
	k--;
	k--;
	for(i=4;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c",k);
			
		}
		printf("\n");
		k--;
	}
	return 0;
}
