#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int myfunction(int x){        //function Overloaded with integer arguments
    return x+x;
}

string myfunction(string s){                         // function Overloaded with String arguments
      cout<<"\nthis is string function\n";
      return s+" Gaurav";
}

string myfunction(string name,int age)
{
   return name+" "+to_string(age);
}


int main()
{
  string data = myfunction("Gaurav",25);
  cout<<"Your Data is : "<<data;
  

 return 0;   
}