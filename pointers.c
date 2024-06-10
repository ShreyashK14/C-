#include <stdio.h>
#include <stdlib.h>

/* Pointers */

int main() {
	
	int n1=10;
	// * means its a pointer variable 
	//pointer variable is used to store address of another variables 
	int *ptr=&n1;//assigning address of n1 to *ptr
	int **ptr2=&ptr;// ** double star means it is a pointer who store address of another pointer
	//%d is used for int value
	//%u is used for address
	printf("\n value of var n1:%d",n1);//print value and address using normal variable
	printf("\n address of var n1:%u",&n1);
	//print above values using pointer variables
	printf("\n value of n1 using pointer var is:%d",*ptr);// * gives value pf n1
	printf("\n address of n1  using pointer var is :%u",ptr);// removing * gives address of n1 just ptr or &*ptr
	//address of pointer
	printf("\naddress of pointer variable: %u",&ptr);
	//using pointer of pointer to get address and value of variable
	printf("\nvalue of n1 using ptr2%d",**ptr2);//**two stars tells the value which is present in ptr1
	printf("\naddres of n1 using ptr2:%u",*ptr2);//remove 1 star we get address of n1
	printf("\naddress of ptr1 using ptr2:%u",ptr2);//remove both star we get address of ptr1
	printf("\nADDRESS OF PTR2:%u",&ptr2);
	getch();
}
