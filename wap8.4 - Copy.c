#include<stdio.h> 
 
int main() { 
 
   float maths, physics, english, chemistry, biology, sum, percentage ; 
 
   printf("enter the maths marks: "); 
   scanf("%f", &maths); 
 
   printf("enter the physics marks: "); 
   scanf("%f", &physics); 
 
   printf("enter the english marks: "); 
   scanf("%f", &english); 
 
   printf("enter the chemistry marks: "); 
   scanf("%f", &chemistry); 
 
   printf("enter the biology marks: "); 
   scanf("%f", &biology); 
 
   sum = maths + physics + english + chemistry + biology; 
   percentage= (( sum*100 ) /500); 
 
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
