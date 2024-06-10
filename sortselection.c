#include <stdio.h>
#include <stdlib.h>
#define max 20



int main() {
	int arr[max],i,j,n,min,temp;
	printf("\enter size of array:");
	scanf("%d",&n);
	printf("\nenter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("\nno in array are:");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
			}
	//selection sort 
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
			
			min=j;}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
			
	return 0;
}
