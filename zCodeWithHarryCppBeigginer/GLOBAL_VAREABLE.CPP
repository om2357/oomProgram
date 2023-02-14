#include<iostream>
using namespace std;

int c =46;
int main()
{
  int a, b, c;
  cout<<"enter your first value a = \n";
  cin>>a;
  cout<<"enter your second value b =  \n";
  cin>>b;
   c = a + b;
  cout<<"the sum of c is \n "<<c;
  cout<<"\nthe global c is uper side , hear it is also same \n "<<::c;//   (::)using this ..we will printglobal vareabale 
    return 0;
}