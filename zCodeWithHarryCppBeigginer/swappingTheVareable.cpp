#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout<<"enter your value\n";
    cin>>num1>>num2>>temp;
    //x=3;y=4;temp
    cout << "before changing the value \n";
    cout<<"num1 :"<<num1<<endl<<"num2 :" << num2<<endl;

 
    temp=num1;//num1
    num1=num2;//num2
    num2=temp;//temp

cout<<"after changing the value\n";
cout<<"num1 : "<<num1<<endl;
cout<<"num2 : "<<num2<<endl;


    return 0;
}