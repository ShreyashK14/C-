#include <stdio.h>
#include <stdlib.h>

/* bubble sort*/
#define max 20
int main() {
	int arr[max],i,j,n,temp;
	printf("\nenter size of array");
	scanf("%d",&n);
	printf("\nentr no in array");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nsorted array");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
	return 0;
}
