#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23,34,45,56};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 666; // you can change the value of arrays
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    int i = 0;
    while (i<4)    // doing arrays with loops (while loops)
    {
        cout<<"The value of marks " <<i<< " is " <<marks[i]<<endl;
        i++;
    }
    for (int i = 0; i < 4; i++)    // doing arrays with loops (for loops)
    {
        cout<<"The value of marks " <<i<< " is " <<marks[i]<<endl;
    }
    
    

return 0;
}