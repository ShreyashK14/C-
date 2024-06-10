#include <stdio.h>
#include <stdlib.h>

/* enr new element to insert and its position */
#define max 20
int main() {
	int arr[max],i,j,n,el,pos;
	printf("\nenter size of array ");
	scanf("%d",&n);
	printf("\nenter no inarray");
	
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("\nno are");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
		
	}
	
   //insertion	
	
	printf("\nentr element to insert and its position");
	scanf("%d%d",&el,&pos);
	for(i=n-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[i+1]=el;
	n++;
	
	printf("\nupdated elements in array are ");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
	//deletion 
	
	printf("\nenter position of element to delete");
	scanf("%d",&pos);
	el=arr[pos-1];
	for(i=pos-1;i<n-1;i++){
		arr[i]=arr[i+1];}
	n--;
	printf("\array is");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
	return 0;
}
