#include<stdio.h> 
 
int main(){ 
 
   int a = 4; 
   int b = 3; 
 
   int c = b; 
   b = a; 
   a = c; 
 
   printf("\n swapping value of a =%d", a); 
 
   printf("\n swapping value of b =%d", b); 
   
   return 0; 
   
   } 
