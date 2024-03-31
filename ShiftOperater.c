#include<stdio.h>

void main()
{
    int a = 10 ;
    
    // Left Shift Operater <<
    printf("The value of a<<3 : %d",a<<3);      // value 10 in Binary = 00001010 
                                                //  Left shift ,Shift by 3 = 00001010+000 = 80                 
    // Right Shift Operater >>
    printf("\n\nThe value of a>>2 : %d",a>>2);  //  value 10 in Binary = 00001010 
                                                //  right shift ,Shift by 2 = 00+000010-10 = 2                 

}