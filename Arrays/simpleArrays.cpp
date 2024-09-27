#include <iostream>
#include <conio.h>
#include <vector>


using namespace std;

int main(){

string cars[4] ={"Volvo","BMW","ford","mazda"};  // string list

for(int i = 0;i<4;i++){
    cout<<cars[i]<<endl;
}

char ch[4] ={'A','B','C','D'};      // char list

for(int i=0;i<4;i++){
     cout<<ch[i]<<endl;   
}

int num[4] ={10,20,30,40};   //  number list

for(int i=0;i<4;i++){
   cout<<num[i]<<endl;
 }


 // new feature in loop its called 'for-each loop'

 int mynumber[5] = {100,200,300,400,500}; // for each loop

 for(int i : mynumber){
    cout<<i<<"\n";
 }

 string food[5] = {"samosa","jalebi","rasgula","methai","saloni"};

 for(string i:food){  
    cout<<i<<endl;
 }
 
 //Dynamic Size Example vectors resizable arrays

 vector<string> data = {"Gaurav","Saurabh"};  //vector data structure
 data.push_back("Atendra");

 for(string i:data){
    cout<<i<<endl;
 }


return 0;
}