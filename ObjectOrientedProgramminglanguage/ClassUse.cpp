#include<iostream>
using namespace std;
#include "ClassByNinja.cpp"
int main()
{
    //creating object statically
    student s1;
    student s2;

    s1.age = 23;
    s1.rollno =33;
    
    s1.print();
    cout<<endl;
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;

    //create object dynamicaaly

    student *s3 = new student;
    
    (*s3).age = 21;
    (*s3).rollno = 444;
    
    // we can also write like this
    cout<<"s3 age is : "<<s3->age<<endl;
    s3 ->age = 233;
    s3 ->rollno = 33;
    cout<<"Update value of age : "<<s3->age<<endl;
    s3->print();

    

    



    return 0;
}