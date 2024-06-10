#include <stdio.h>
#include <stdlib.h>


int factorial(int);
int main() {
	int n;
	printf("enter no for its factorial");
	scanf("%d",&n);
	printf("factorial is %d",factorial(n));
		return 0;
}
int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
		
	}
	else{
		return 1;
		
	}
}

/*int main(){

int n,i,ans=1;
printf("enter no");
scanf("%d",&n);
for(i=2;i<=n;i++){
	ans=ans*i;
}
printf("fCTORIAL IS:%d",ans);
}*/
