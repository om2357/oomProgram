#include <iostream>
using namespace std;
int main()
{
    string *sp = new string;
    *sp = "deff";
    cout<<sp<<endl;//address
    cout<<*sp<<endl; // value
    string s = "abc";
    //cin>>s;
    getline(cin ,s);//for taking input a hole line
    string s1;
    s1 = "def";
    cout<<s<<endl<<s1<<endl;

    string a = "srfseer";
    cout<<a[0]<<endl;
    a[0] = 'o';        //this behave like a array
    cout<<a[0]<<endl;
    cout<<a<<endl;

    string s2 = s + s1;
    cout<<s2<<endl;
    cout<<s.size()<<endl;  //we can also find the size of string

    cout<<"i want from 3rd index : "<<s.substr(3)<<endl;//a part of string ,using substr
    cout<<"i want only a particular length of string : "<<s.substr(3,3)<<endl;

    cout<<"we can find a particular element in this string : "<<s.find("ku")<<endl;



    return 0 ;
}