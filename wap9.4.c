
#include<stdio.h> 
 
int main(){ 
 
   int firstNum, secondNum, thirdNum; 
 
   printf("enter the first number; "); 
   scanf("%d" , &firstNum); 
 
   printf("enter the second number; "); 
   scanf("%d" , &secondNum); 
   
 
   thirdNum = secondNum; 
   secondNum = firstNum; 
   firstNum = thirdNum; 
 
   printf("\n value of firstNum after swapping =%d", firstNum); 
 
   printf("\n value of secondNum after swapping =%d", secondNum); 
   
   return 0; 
   
   } 
