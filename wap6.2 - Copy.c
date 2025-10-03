
#include<stdio.h> 
 
int main(){ 
 
   int firstNum = 34; 
   int secondNum = 45; 
   int thirdNum = 32; 
 
   if (secondNum > firstNum && secondNum > thirdNum) 
   printf(" \n secondNum is greatest among three: "); 
 
   else if (firstNum > secondNum && firstNum > thirdNum) 
   {printf(" \n firstNum is greatest among three: "); } 
 
   else 
   printf(" \n thirdNum is greatest among three: "); 
   
   return 0; 
   
   } 
