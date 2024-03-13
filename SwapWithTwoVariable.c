#include<stdio.h>

void main()
{
	short a = 10 ;
	short b = 20 ;
	
	a = a + b ; 	// a = 30
	b = a - b ;		// b = 30 - 20 = 20
	a = a - b ;		// a = 30 - 10 = 10
	
	printf("After Swap a = %d and b = %d " , a , b);
}