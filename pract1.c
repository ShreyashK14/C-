#include <stdio.h>
#define max 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int arr[max][max],arr1[max][max],arr2[max][max],i,j,n,row,col,row1,col1,row2,col2,e=0,o=0,s,pos=1,sum=0,avg,temp,postn,el;
	printf("enter row and column of array1\n");
	scanf("%d%d",&row,&col);
	printf("enter numbrs in array1\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("enter row and column of array2\n");
	scanf("%d%d",&row1,&col1);
	printf("enter numbrs in array2\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&arr1[i][j]);
		}
		
	}
	
	
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			arr2[i][j]=arr[i][j]+arr1[i][j];
			
			}
		
	}
	
	printf("addition  in array\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",arr2[i][j]);
		}
		printf("\n");
		
	}
		
	
	

	
	

	

	
	return 0;
}
