#include<stdio.h>
#define MAX 10000; 
int main() {
	//const���εĳ�����
	const int num = 10;//num���ǳ�����-���г����ԣ����ܱ��ı�����ԣ�
	printf("num=%d\n", num);
	return 0;

	//#define����ı�ʶ������
	int n = MAX;
	printf("n=%d", n);
	return 0;
}
