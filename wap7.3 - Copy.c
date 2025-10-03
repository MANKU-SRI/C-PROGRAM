#include<stdio.h> 
 
int main() { 
 
   int maths; 
   printf("enter the maths marks: "); 
   scanf("%d", &maths); 
 
   int physics; 
   printf("enter the physics marks: "); 
   scanf("%d", &physics); 
 
   int english; 
   printf("enter the english marks: "); 
   scanf("%d", &english); 
 
   int chemistry; 
   printf("enter the chemistry marks: "); 
   scanf("%d", &chemistry); 
 
   int biology; 
   printf("enter the biology marks: "); 
   scanf("%d", &biology); 
 
 
   int sum = maths + physics + english + chemistry + biology; 
   float percentage=( ((float) sum*100 ) /500); 
 
   printf("percentage obtained :%f=",percentage); 
 
   return 0; 
} 
