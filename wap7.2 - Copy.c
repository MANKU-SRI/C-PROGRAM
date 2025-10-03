#include<stdio.h> 
 
int main() { 
 
   int maths = 76; 
   int physics = 78; 
   int english = 90; 
   int chemistry = 92; 
   int biology = 76; 
 
   int sum = maths + physics + english + chemistry + biology; 
   float percentage=( ((float) sum*100 ) /500); 
 
   printf("percentage:%f=",percentage); 
 
   return 0; 
} 
