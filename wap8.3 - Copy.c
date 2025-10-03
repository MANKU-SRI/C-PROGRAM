#include<stdio.h> 
 
int main() { 
 
  float maths; 
  printf("enter the maths marks: "); 
  scanf("%f", &maths); 
 
  float physics; 
  printf("enter the physics marks: "); 
  scanf("%f", &physics); 
 
  float english; 
  printf("enter the english marks: "); 
  scanf("%f", &english); 
 
  float chemistry; 
  printf("enter the chemistry marks: "); 
  scanf("%f", &chemistry); 
 
  float biology; 
  printf("enter the biology marks: "); 
  scanf("%f", &biology); 
 
  float sum = maths + physics + english + chemistry + biology; 
  float percentage= (( sum*100 ) /500); 
 
 
  printf("percentage:%f=",percentage); 
 
   if (" percentage >=90 and p<=100") 
   {printf("Grade ‘A’ ");} 
 
   else if ("percentage >=80 and p<90") 
   {printf("Grade ‘B’ ");} 
 
   else if ("percentage >=60 and p<80") 
   {printf("Grade ‘C’ ");} 
 
   else 
   {printf("Grade ‘D’ ");} 
 
   return 0; } 
