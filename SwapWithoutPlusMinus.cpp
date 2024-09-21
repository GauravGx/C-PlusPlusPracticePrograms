#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 float x,y;
 cout<<"Enter Two Number (Condition firstNumber > SecondNumber): ";
 cin>>x>>y;
 cout<<"You Entred : "<<x<<" "<<y;
 if(x>y){
     x = x/y;
     y = x*y;
     x = y/x;
     cout<<"\n After Swaping : "<<x<<" "<<y;
 }else
      cout<<"\n You Break Condition try Again ";

return 0;   
}