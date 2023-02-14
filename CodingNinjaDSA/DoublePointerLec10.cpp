#include<iostream>
using namespace std;
int main()
{
    int i =10;
    int *p = &i;

    int **p2=&p;
    cout<<p2<<endl; //it's hold the address of p ...actually p2 is store the add of p 
    cout<<&p<<endl; //and it's already contain the address of i

    cout<<p<<endl;//they print the address of i which store in the p  
    cout<<*p2<<endl;//this is derefrense the value in the p2 & it's goes in the p & print the value of p (address)
    return 0;
}