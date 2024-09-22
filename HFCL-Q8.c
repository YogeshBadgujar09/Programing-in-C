#include<stdio.h>

void main() 
{ 
    int i ; 
    float *pf; 
    pf = (float *)&i; 
   *pf = 100.00; 
    printf("%d", i); 
} 