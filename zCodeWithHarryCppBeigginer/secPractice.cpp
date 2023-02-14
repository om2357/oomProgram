#include<iostream>
#include<string>
using namespace std;

class student 
{
    string name;
    int age ;
    bool gender;

    public :
    student ()
    {
        cout<<"hello guys"; //defualt constructer
    }

    student(string n,int a , bool g)
    {
        name = n;
        age = a;           //parameterised Constructer
        gender = g;
    }
    void printInfo()
    { 
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;

    }


};
int main()
{
    student z("om",32,0);
    z.printInfo();
    student y;
    
    return 0;
}