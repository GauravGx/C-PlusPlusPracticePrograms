#include <iostream>
#include <conio.h>

using namespace std;

void sum(int x,int y){   // take somthing return nothig
  int result=x+y;
   cout<<"sum is : "<<result;
}


void my_function(string fname){  // take  String type data
     cout<<fname<<" \n ";
}

//default Parameter value

void my_function1(string country = "india"){ // take default value when nothin passed 
       cout<<"Your Country is "<<country;
}

void my_function2(string name,int age){    // takes multiple type data in function
    cout<<"Name :"<<name<<"\nAge :"<<age;
}

void my_function3(string name = "Shubham",int age = 20){
    cout<<"\nName : "<<name<<"\nAge :"<<age;
}


// Returning Function Something 

int my_funtion4(int x){
    return (x+x);
}

int my_function5(int x,int y){
        return (x+y);
}

//Pass by Reference

void swapNumber(int &x,int &y){
    int z = x;
    x = y;
    y = z;
    cout<<"\nIn the Function swap x = "<<x<<" y = "<<y;
}

void swapString(string &s1,string &s2){

     string s3 = s1;
     s1 = s2;
     s2 = s3;

     cout<<"\nIn function swap String s1 "<<s1<<" s2 "<<s2;
}


// pass argument as Array

void takeArray(int myArry[5]){

    for(int i=0;i<5;i++){
        cout<<"\n"<<myArry[i];
       }
}



int main()
{
   int number[5]={5,4,3,2,1};
   takeArray(number);    
   

 return 0;   
}