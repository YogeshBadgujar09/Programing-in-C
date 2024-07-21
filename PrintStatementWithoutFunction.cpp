#include<stdio.h>

int main()
{
	char *hello = "hello,World";
	
	while(*hello)
	{
		putchar(*hello);
		hello++;
	}
	
	return 0;   
	}