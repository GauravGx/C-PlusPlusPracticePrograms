#include <iostream>
#include <conio.h>


using namespace std;

float toCeldius(float fahrenheit){
   return (5.0/9.0)*(fahrenheit - 32.0);
 }

int main()
{
  float f_value = 98.8;
  
  float result = toCeldius(f_value);

  cout<<"Fahrenheit: "<<f_value;
  cout<<"\nConverted fahrenheit to celsius : "<<result <<"\n";




 return 0;   
}