#include<stdio.h>
#define MAX 10000; 
int main() {
	//const修饰的常变量
	const int num = 10;//num就是常变量-具有常属性（不能被改变的属性）
	printf("num=%d\n", num);
	return 0;

	//#define定义的标识符常量
	int n = MAX;
	printf("n=%d", n);
	return 0;
}
