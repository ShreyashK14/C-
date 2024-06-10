#include <stdio.h>
int main(){
	int ch;
	for(ch=65;ch<=90;ch++){
		printf("%d=%c\t\n%d=%c\t\n",ch,ch,ch+32,ch+32);
	}
	return 0;
}
