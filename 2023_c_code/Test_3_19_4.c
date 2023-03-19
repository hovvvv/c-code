#include<stdio.h>
int main(){
	int a = 1;
	int b = 0;
	int c = a && b;
	//&&并且，只要有一个为假就都为假 
	printf("%d\n",c);
	int d = 1;
	int e = 0;
	int f = d || e ;
	// ||或者，只要有一个为真就都为真 
	printf("%d",f); 
	return 0;
}
