#include<stdio.h>
int main(){
	int a = 1;
	int b = 0;
	int c = a && b;
	//&&���ң�ֻҪ��һ��Ϊ�پͶ�Ϊ�� 
	printf("%d\n",c);
	int d = 1;
	int e = 0;
	int f = d || e ;
	// ||���ߣ�ֻҪ��һ��Ϊ��Ͷ�Ϊ�� 
	printf("%d",f); 
	return 0;
}
