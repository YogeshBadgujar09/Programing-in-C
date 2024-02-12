#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter number of Index :");
	scanf("%d",&n);
	
	int a[n];
	
	for(int i=0 ;i<n ;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0 ;i<n ;i++)
	{
		printf("\n%d",a[i]);
	}
	
	
	
	
}