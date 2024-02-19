#include<stdio.h>

int myfunction(int x)
{
	printf("function with argument and return type\n");
	
	return x*x;
}

void main()
{
	int x,res;
	res=myfunction(12);
	
	printf("return value :%d",res);
}