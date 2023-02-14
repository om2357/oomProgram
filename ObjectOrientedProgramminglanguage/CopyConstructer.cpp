#include <iostream>
using namespace std;
#include "ClassFirst.cpp"
int main()
{
    //this is copy constructer

    student s1(18,2008);
    cout<<"s1 : ";
    s1.display();
    // cout<<"s2 : ";
    cout<<endl;
    
    // we will pass the value of s1 into the Object s2

    student s2(s1);
    cout<<"s2 : ";
    s2.display();
    cout<<endl;

    // how to create this using dynamically

    student *s3 = new student(20 , 2011);
    cout<<"s3 : ";
    s3-> display();
    cout<<endl;
    // dynamically called copy Constructer

    student *s4 = new student(*s3);
    cout<<"*s4 : ";
    s4 -> display();

    // we have to pass the static value in dynamically

    student *s5 = new student(s1);
    cout<<"*s5 : ";
    s5 -> display();
    //in the 35 no. line we can pass the value of s1(s1 is store in staticaly);

    delete s3;

    


    return 0;
}