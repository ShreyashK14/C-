#include <stdio.h>
int main(){
	int i,n,add=0;
	printf("enter no");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2!=0){
			add=add+i;
		}
		
		
	}
	printf("addn is %d",add);
	return 0;
}
