#include<stdio.h>
#include<string.h>

void main()
{
	char str[20] = "Yogesh Badgujar";
	printf("Normal String is : %s",str);
	printf("\nReverse String Function use : %s",strrev(str));
	
	char str1[7] = "Rohit";
	printf("\nNormal String is : %s" , str1);
	printf("\n");
	printf(strrev(str1));     
 
}