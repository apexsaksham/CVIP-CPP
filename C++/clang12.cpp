#include<iostream>
using namespace std;

int main(){
    int a = 34;
    int* b = &a;
    // &---> (address of )operator
    cout<<"The address of a is :"<<b<<endl;
    cout<<"The address of a is :"<<&a<<endl;
    
    // *---> (value at) dereference operator
    cout<<"The address of b is :"<<*b<<endl;



return 0;
}