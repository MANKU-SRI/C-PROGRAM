 
#include<stdio.h> 
 
int main() { 
 
   int maths, physics, english, chemistry, biology, sum, percentage; 
   
   printf("enter the maths marks: "); 
   scanf("%d", &maths); 
 
   printf("enter the physics marks: "); 
   scanf("%d", &physics); 
 
   printf("enter the english marks: "); 
   scanf("%d", &english); 
 
   printf("enter the chemistry marks: "); 
   scanf("%d", &chemistry); 
 
   printf("enter the biology marks: "); 
   scanf("%d", &biology); 
 
   sum = maths + physics + english + chemistry + biology; 
   
   percentage=( ( sum*100 ) /500); 
 
   printf("percentage obtained :%d=",percentage); 
 
   return 0; 
} 
