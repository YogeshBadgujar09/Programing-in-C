#include<stdio.h>
#include<string.h>

int main()
{
	char ch[10] = {'y','o','g','e','s','h'};
	
	printf("length :%d" ,strlen(ch));
	printf("\nlength :%c" ,strlen(ch));
	printf("\nlength :%f" ,strlen(ch));
	printf(strlen(ch));  //not print without format specifier
	return 0;
}