#include<stdio.h>
int main(){
//���ű��ʽ
	int a = 0;
	int b = 3;
	int c = 5;
	int d =(a = b + 2,c = a - 4,b = c + 2 );
	printf("%d",d);
	return 0;
 
} 
