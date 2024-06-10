#include <stdio.h>
int main(){
	int b,p,i,ans=1;
	printf("entr base and power:");
	scanf("%d%d",&b,&p);
	for(i=1;i<=p;i++){
		ans=ans*b;
	}
	printf("ans:%d",ans);
}
