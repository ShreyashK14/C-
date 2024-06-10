#include <stdio.h>
#define max 20
int main(){
	int arr[5]={1,2,3,4,5},i;
	int *ptr=&arr;
	printf("\n%d",*ptr);
	printf("\n%d",*ptr+1);
	printf("\n%d",*(ptr+1));
	printf("\n%d",*(ptr+0));
	
	printf("\nno in arry");
	for(i=0;i<5;i++){
		printf("\n%d-->%u",*(ptr+i),(ptr+i));
	}

  return 0;
}
