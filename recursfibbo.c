#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int fibbo(int,int)
int main() {
	int i=0,j=1,k,cnt,n;
	
	printf("enter size of fibbo series");
	scanf("%d",&n);
	printf("%d %d",i,j);
	for(cnt=1;cnt<=n-2;cnt++){
		k=i+j;
		printf(" %d",k);
		i=j;
		j=k;
	}
	return 0;
}
