#include <stdio.h>
#include <stdlib.h>
//1 without argument and without return type
/* 
void areacircle();//function declaration

int main() {
	areacircle();//function call
		return 0;
}
void areacircle(){//implementation
	float r,ac;
	printf("enter radius");
	scanf("%f",&r);
	ac=3.14*r*r;
	printf("area of circle%.2f",ac);
	
}*/


//2 with argument and without return type


/*void areacircle(float);//function declaration

int main() {
	float r;
	printf("enter radius");
	scanf("%f",&r);
	areacircle(r);//function calling
		return 0;
}
void areacircle(float x){//implementation
	float ac;
	ac=3.14*x*x;
	printf("area of circle%.2f",ac);
	
}*/

//3 without argument and with return type
/*void areacircle();

int main(){
	float r,a;
	
	a=areacircle();
	printf("area of circle is%f",a);
	return 0;
	} 
	
float areacircle()
{
	float ac,x;
	printf("enter radius");
	scanf("%f",&x);
	ac=3.14*x*x;
	return ac;
}*/

//4 with argument and with return type

float areacircle(float)
int main(){
	float r,a;
	printf("enter radius for circle");
	scanf("%f",&r);
	a=circlearea(r);
	printf("area of circle%f",a);
	return 0;}
	float circlearea(float r)
{
	float ca;
	ca=3.14*r*r;
	return ca;

	}	

	
