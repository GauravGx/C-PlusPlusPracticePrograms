#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
  int x,y;
  cout<<"Enter Two Number : ";
  cin>>x>>y;
  cout<<"You Entered : "<<x<<" "<<y;
  
  x = x+y;
  y = x - y;
  x = x - y;

  cout<<"\n After Swaping : "<<x<<" "<<y;
 return 0;   
}