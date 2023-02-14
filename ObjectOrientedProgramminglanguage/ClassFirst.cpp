#include<iostream>
using namespace std;
class student
{
    public :
    int rollno;
    int age;
    private :
   // int study= 3;
    
    public :

    void display()
    {
        cout<<age<<" "<<rollno <<" ";//<<study <<" ";
    }

    // how to make default constructor

    student()
    {
        cout<<"Constructor called ! "<<endl;
    }

    // this is parametrized constructoe

    student(int r)
    {
        cout<<"constructor 2 called ! "<<endl;
        rollno = r;
    }

    // this is third parameterized constructor

    student(int a, int roll)
    {
        cout<<"Constructor 3rd called ! "<<endl;
        
        age = a;
        rollno = roll;
    }

    ~student()
    {
        cout<<"Destructer called ! ";
    }

    //how to make object

};

