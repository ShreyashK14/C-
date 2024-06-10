#include <stdio.h>
int main(){
	int n,i,x=1;
	printf("enter no:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
		
		x=0;
		break;}
		}
	if(x==1){
		printf("no is prime");}
	else{
		printf("no is not prime");
}
		return 0;
	
	
			
	
}
