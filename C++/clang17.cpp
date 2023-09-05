#include<iostream>
using namespace std;

int factorial(int n){ //. factoral funtion
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);

}
int main(){
    int a ;
    cout<<"Ente the number : ";
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;

return 0;
}