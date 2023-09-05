#include<iostream>
int glo = 69;  // global variable
using namespace std;

int main(){
    int glo = 96; // Local variable has presidence over global variable
    int a = 4;
    int b = 6;
    float pie = 1.19;
    char c = 'e';
    cout<< glo;
    bool is = true&&false;
    cout<<is;

//   cout<<" hello world. \nhere the value of a is "<<a<<".\n the value of b is "<<b;
//   cout<<"\nthe value of pie is "<<pie; 
//   cout<<"\nthe value of c is "<<c; 
  return(0);
}