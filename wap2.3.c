#include<stdio.h> 
 
int main(){ 
 
 
   float temperatureInCentigrade ; 
   printf("\n enter the temperature in centigrade: "); 
   scanf("%f" , &temperatureInCentigrade); 
 
   float temperatureInFahrenheit = (temperatureInCentigrade*9)/5+32; 
 
   printf("\n temperature in fahrenheit: %f", temperatureInFahrenheit); 
 
   return 0; 
 
} 
