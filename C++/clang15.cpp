#include<iostream>
using namespace std;

int sum(int a,int b){ // Example of function
    int c = a + b;
    return c;
 }


int main(){
    int num1, num2;
    cout<<"Enter the first value: ";
    cin>>num1;
    cout<<"Enter the second value: ";
    cin>>num2;
    cout<<"The sum is :" <<sum(num1,num2);

return 0;
}