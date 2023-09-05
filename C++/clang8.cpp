#include<iostream>
#include<iomanip> // new header file (manipulator header file)

using namespace std;

int main(){
    // int a = 25;
    // cout<<"the value of a was : "<<a<<endl;

    // a = 35;
    // cout<<"the value of a is : "<<a<<endl;

    

    // ******* constants in C+ ********
    // const int a = 3;
    // cout<<"the value of a : "<<a<<endl;
    // a = 34;
    // cout<<"the value of a : "<<a<<endl;
    // return 0;

    // *******8manipulators in C++******

    // int a = 4, b= 34, c = 6769;
    // cout<<" the value without setw is : "<<a<<endl;    
    // cout<<" the value without setw is : "<<b<<endl;    
    // cout<<" the value without setw is : "<<c<<endl;

    // cout<<" the value without  is : "<<setw(4)<<a<<endl;    
    // cout<<" the value without  is : "<<setw(4)<<b<<endl;    
    // cout<<" the value without  is : "<<setw(4)<<c<<endl;    
    // return 0;



    //operator presedece
    int a = 3, b = 4;
    int c = (a*5)+b-2+5;
    cout<<c;
    return 0;
}