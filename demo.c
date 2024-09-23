#include<stdio.h>

void main() 
{ 
    int i ; 
    float *pf; 
    pf = (float *)&i;
	printf("%d\n",i);
	printf("%x\n",pf);
	printf("%x\n",&i);
	*pf = 100.00; 
	printf("%f\n",*pf);
    printf("%d
	", i); 
} 