#include<iostream>
using namespace std;

union money
{
   int rice;
   char car;
   float doller;
};

int main()
{union money m;
m.rice =30;
m.car = 'o';
m.doller = 303.3;
// cout<<m.rice<<endl;
// cout<<m.car<<endl;             overall in 3 declaration we can use only one, otherwise we can fond only garbage value
cout<<m.doller<<endl;

    return 0;
}

