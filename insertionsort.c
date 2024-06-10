#include <stdio.h>
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
	
    for(i=1;i<n;i++){
    	j=i-1;
    	temp=arr[i];
    	while(j>=0){
    		if(arr[j]>temp){
    			arr[j+1]=arr[j];
    		}
    		else{
    			break;
			}
			j--;
			
			}
			arr[j+1]=temp;
	}
	printf("\nsorted elements;");
	for(i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
	return 0;
		
	}
