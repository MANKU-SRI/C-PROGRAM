
#include<stdio.h> 
 
int main() { 
 
  float maths = 76; 
  float physics = 78; 
  float english = 90; 
  float chemistry = 92; 
  float biology = 76; 
 
  float sum = maths + physics + english + chemistry + biology; 
  float percentage= ((sum*100 ) /500); 
 
  printf("percentage:%f=",percentage); 
 
   if (" percentage >=90 and p<=100") 
   {printf("Grade ‘A’ ");} 
 
   else if ("percentage >=80 and p<90") 
   {printf("Grade ‘B’ ");} 
 
   else if ("percentage >=60 and p<80") 
   {printf("Grade ‘C’ ");} 
 
   else 
   {printf("Grade ‘D’ ");} 
 
   return 0; 
 
   } 
