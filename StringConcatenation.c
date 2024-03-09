#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[10] = {'h','e','l','l','o','\0'};
	char ch2[10] = {'w','o','r','l','d','\0'};
	
	strcat(ch1,ch2);
	
	printf("Value of first String :%s" , ch1);
	
	return 0;
}