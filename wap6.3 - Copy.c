#include<stdio.h> 
 
int main(){ 
 
   int firstNum ; 
   printf(" enter the first Number: "); 
   scanf("%d", &firstNum ); 
 
   int secondNum ; 
   printf(" enter the second Number: "); 
   scanf("%d", &secondNum) ; 
 
   int thirdNum ; 
   printf(" enter the third Number: "); 
   scanf("%d", &thirdNum); 
 
 
   if (secondNum > firstNum && secondNum > thirdNum) 
   printf(" \n secondNum is greatest among three: "); 
 
   else if (firstNum > secondNum && firstNum > thirdNum) 
   {printf(" \n firstNum is greatest among three: "); } 
 
   else 
   printf(" \n thirdNum is greatest among three: "); 
   
   return 0; 
   
   } 
