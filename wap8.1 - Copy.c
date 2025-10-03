#include<stdio.h> 
 
int main(){ 
 
   float a=76; 
   float b=78; 
   float c=90; 
   float d=92; 
   float e=76; 
 
   float sum=a+b+c+d+e; 
   float p=(sum/500)*100; 
 
   if ("p>=90 and p<=100") 
   {printf("Grade ‘A’ ");} 
 
   else if ("p>=80 and p<90") 
   {printf("Grade ‘B’ ");} 
 
   else if ("p>=60 and p<80") 
   {printf("Grade ‘C’ ");} 
 
   else 
   {printf("Grade ‘D’ ");} 
 
   return 0; 
 
   } 
