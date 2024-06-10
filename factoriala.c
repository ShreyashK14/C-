#include<stdio.h>
int main(){
	int i,ans=1,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		ans=ans*i;
	   
			}
	printf(" factorial is%d ",ans );
	return 0;
}
