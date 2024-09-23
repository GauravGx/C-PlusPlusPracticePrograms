#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int x,y,z;
  cout<<"Enter two number : ";
  cin>>x>>y;
  cout<<"You Entered : "<<x<<" "<<y;
  z=x;
  x=y;
  y=z;
  cout<<"\n swap Number is : "<<x<<" "<<y;


 return 0;   
}