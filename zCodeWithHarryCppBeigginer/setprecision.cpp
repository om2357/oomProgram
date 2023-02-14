#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a=45.212282345;
    float b= 2012.0;
    float c=324e-3;
    cout.precision(9);
    cout<<fixed;

    cout<<a<<endl<<b<<endl<<c<<endl;
    
    cout<<"=============================="<<endl;

    // float aa=45.212282345;
    // float bb= 2012.0;
    // float cc=324e-3;
    // cout<<setprecision(11);
    // // cout<<setprecision<<bb<<(8);
    // cout<<aa<<endl<<bb<<endl<<cc<<endl;


    return 0;
}