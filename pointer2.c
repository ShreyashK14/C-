#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int i;
	int *ptr=&arr;//here ptr will take address of fiest element
	printf("\n%d",*ptr);
	printf("\n%d",*ptr+1);
    
    printf("\n%d",*(ptr+0));
    
    for(i=0;i<5;i++){
    	printf("\n%u ->%d",ptr+i,*(ptr+i));
	}
	getch();
}
