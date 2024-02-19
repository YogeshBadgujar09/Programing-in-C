#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter a & b value :");
	scanf("%d%d",&a,&b);
	
	sum(a,b);
}

int sum(int a,int b)
{
	int c;
	
	c=a+b;
	printf("c=%d\n",c);
}