#include<stdio.h>
 
int main(){ 
 
   int  year = 2005; 
 
   if (( year % 400 == 0 )|| ( year % 4 == 0 && year % 100 != 0) ) 
   printf("year is leap year"); 
 
   else 
   printf(" year is not a leap year"); 
   
   return 0;}
