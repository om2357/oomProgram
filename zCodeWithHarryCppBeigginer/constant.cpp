#include <iostream>
using namespace std;
int main()
{
    // int a=53;
    // cout<<"the value of a is : "<<a;
    // a=34;//you can get a error 
    //because you can use const keyword
    // cout<<"\nthe value of second a is : "<<a;
    // Constant in C++
    const int a = 344; //   this is never 
    //can be changed using upper side consapt
    // const int a=344;   //   Using ---> const we can
    // not change the value
    cout << "printing the  const variable --->" << a;
    return 0;
}