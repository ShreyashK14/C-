#include <stdio.h>


/* no greater than avg of all no in array*/
#define max 20

int main() {
	int arr[max],i,n,sum=0;
	float avg;
	printf("\nentr size of array:");
	scanf("%d",&n);
	printf("\entr no in arr ");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("\nno are ");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	for(i=0;i<n;i++){
	sum=sum+arr[i];
	}
	avg=sum/n;
	printf("\navg is%f",avg);
	printf("\nno greater than avg");
	for(i=0;i<n;i++){
		if(arr[i]>avg){
		
		printf(" %d",arr[i]);
		}
		
		
		
			
		
		
		
	}
	
	
	
	
	
	 
	
	return 0;
}
