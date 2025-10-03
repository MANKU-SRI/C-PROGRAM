
#include<stdio.h> 
 
int main(){ 
 
   int firstNum; 
   printf("enter the first number; "); 
   scanf("%d" , &firstNum); 
 
   int secondNum; 
   printf("enter the second number; "); 
   scanf("%d" , &secondNum); 
   
 
   int thirdNum = secondNum; 
   secondNum = firstNum; 
   firstNum = thirdNum; 
 
   printf("\n value of firstNum after swapping =%d", firstNum); 
 
   printf("\n value of secondNum after swapping =%d", secondNum); 
   
   return 0; 
   
   } 
