#include <stdio.h>
int main(){
	int i,j,h,k,n;
	printf("enter no");
	scanf("%d",&n);
	i=0;
	j=1;
	printf("%d %d ",i,j);
	for(h=0;h<=n;h++){
		k=i+j;
		printf("%d ",k);
		i=j;
		j=k;
	}
return 0;	
}
