// C program to find sum of HP 
#include <stdio.h> 
  
// Function to return sum of 1/1 + 1/2 + 1/3 + .. 

int main() 
{ 
    int n = 5;
    double i=1.0, s = 0.0; 
  while (1) {
    if(i==1000){
      break;}
    else{
      s = s + 1/i;
      i=i+1;} }
    printf("Sum is %lf", s); 
    return 0; 
}