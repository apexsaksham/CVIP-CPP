// there are two types of files :
// 1. system header files: It comes with the compiler
#include<iostream>
// 2. user defined header files: It is written by the programmer
// #include"God.h"  // if this is not created in by the user this will produce errors.
using namespace std;

int main(){
    int a=1, b=2;
    
    // Arithmetic operators
    cout<<"The value of a + b is:"<<a+b<endl;
    cout<<"The value of a - b is:"<<a-b<endl;
    cout<<"The value of a * b is:"<<a*b<endl;
    cout<<"The value of a / b is:"<<a/b<endl;
    cout<<"The value of a % b is:"<<a%b<endl;
    cout<<"The value of a ++ is:"<<a++<<endl;
    cout<<"The value of a -- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a +  is:"<<--a<<endl;
    return 0;

}