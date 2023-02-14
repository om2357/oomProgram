#include<iostream>
using namespace std;
int main()
{
    int i =10 ;
    cout<<&i<<endl;
    int * p =&i;
    cout<<"your addreas of i in p "<<p<<endl;
    cout<<endl;
    cout<<"value = "<<*p<<endl;                         //hear *p s drefrence operator 

    float f =10.3;
    float * pf=&f;
    cout<<"pf= "<<pf;
}






