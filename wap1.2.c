include<stdio.h> 
 
int main(){ 
 
   float radius = 22; 
 
   float circumference  = 2* 3.14*radius; 
 
   float area = 3.14*radius*radius; 
 
   printf("\n circumference of circle = %f", &circumference ); 
 
   printf("\n area of circle = %f", &area); 
 
   return 0; 
 
}
