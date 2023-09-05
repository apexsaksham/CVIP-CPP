#include<iostream>
using namespace std;
struct employee
{
   int eId;
   char favChar;
   float salary;

};
union money
{
   int rice;
   char car;
   float pounds;

};


int main(){
    struct employee saksham; // example of union
    saksham.eId = 1;
    saksham.favChar = 'S';
    saksham.salary = 100000;
    union money m1; // example of union
    m1.rice = 23;
    m1.car = 'c';
    // cout<<saksham.eId<< " <--eId " <<saksham.favChar<<" <--favChar " <<saksham.salary<< " <--salary " ;
    cout<<m1.rice;

return 0;
}