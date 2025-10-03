
#include<stdio.h> 
 
int main(){ 
 
   int  b = 2005; 
 
   if (( b% 400 == 0 )|| ( b % 4 == 0 && b % 100 != 0) ) 
   printf("b is leap year"); 
 
   else 
   printf(" b is not a leap year"); 
   
   return 0;} 
