#include<stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int  i = 0;
	while(i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0; 
	//sizeof 变量括号可以省略，数据类型不可省略 
//	int a = 10;
//	printf("%d\n",sizeof(int));
//	printf("%d\n",a);
//	return 0;
} 
