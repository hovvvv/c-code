#include<stdio.h>
int main(){
	//条件操作符（三目操作符）exp1？exp2：exp3 
	//exp1成立，exp2计算，整个表达式的结构是：exp2的结果
	//exp1不成立，exp3计算，整个表达式的结构是：exp3的结果
	int a = 0;
	int b = 3;
	int max = 0;
	
//	if(a>b)
//	max = a ;
//	else
//	max = b;
	
	max = a > b ? a : b;
	printf("%d",max);
	return 0;  
} 
