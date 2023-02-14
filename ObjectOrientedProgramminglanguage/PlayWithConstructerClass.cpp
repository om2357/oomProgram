#include <iostream>
using namespace std;
#include "ClassFirst.cpp"
int main()
{
    student s1; //Constructor 1 called

    student s2(101); //Constructor 2 called 

    student s3(20,102); //Constructor 3 called

    student s4(s3); //Copy Constructor Called
    
    s1 = s2 ; //Copy asignment Operater

    student s5 = s4; // Copy constructor Called (this is similar to Copy constructor) 
    
    // this is interpret like(student s5;) --> student s5(s4);
                            //   s5 = s4;


    return 0;
}