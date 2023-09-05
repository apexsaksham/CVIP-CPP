#include<iostream>

using namespace std;

int main()
{
    /* code */
    int age;
    cout<<"Tell me your age :";
    cin>>age;

    // *********if else statement********
    // if (age<18)
    // {
    //     cout<<"\nYou are not eligible to vote";

    // }
    //  else if(age==18){
    //    cout<<"\nyou can vote";
    // }
    //  else{
    //     cout<<"you are elder enough to vote"<<endl;
    // }
  
    // ******Swtich case*******
    switch (age)

    {
    case 18:
        cout << "You can 18" << endl;;
        break;
    case 22:
        cout << "You can 22" << endl;;
        break;

    case 2:
        cout << "You can 2" << endl;;
        break;
    default:
    cout<< "You are special case" <<endl;
        break;
    }
    

    return 0;
}
