#include<stdio.h>

int swap(int *,int*);

int main()
{
	int a,b;
	printf("enter a value :");
	scanf("%d",&a);
	
	printf("enter b value :");
	scanf("%d",&b);
	
	swap(&a,&b);
}

int swap(int *a,int *b)
{
	int *temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("value of *a=%d and *b=%d",*a,*b);
}