#include<stdio.h> 
 
int main(){ 
 
   int firstNum = 4; 
   int secondNum = 3; 
 
   int thirdNum = secondNum; 
   secondNum = firstNum; 
   firstNum = thirdNum; 
 
   printf("\n value of firstNum after swapping =%d", firstNum); 
 
   printf("\n value of secondNum after swapping =%d", secondNum); 
   
   return 0; 
   
   } 
