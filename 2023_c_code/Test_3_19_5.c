#include<stdio.h>
int main(){
	//��������������Ŀ��������exp1��exp2��exp3 
	//exp1������exp2���㣬�������ʽ�Ľṹ�ǣ�exp2�Ľ��
	//exp1��������exp3���㣬�������ʽ�Ľṹ�ǣ�exp3�Ľ��
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
