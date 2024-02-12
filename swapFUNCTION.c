#include<stdio.h>

int swap(int a,int b);

int main()
{
     int x,y;

	printf("enter x value :");
	scanf("%d",&x);
	
	printf("enter y value :");
	scanf("%d",&y);
	
	swap(x,y);
}

int swap(int a,int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("value of x=%d and y=%d",a,b);
}