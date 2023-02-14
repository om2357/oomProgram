#include <iostream>
using namespace std;
#include "ClassFirst.cpp"
int main()
{
    // creating object statically
    student s1;
    student s2;

    s1.age = 21;
    s1.rollno = 213;

    cout << s1.age << endl;
    cout << s1.rollno << endl;
    s1.display();

    // Creating object dynamically

    //  int *p = new int ; we can simply write like the same,
    student *s3 = new student;

    // how to store dynamicaly for class

    (*s3).age = 23;
    (*s3).rollno = 121;
    (*s3).display();

    // we can also write this same in other way in dynamic memory

    s3->age = 23;
    s3->rollno = 121;
    s3->display();

    student s4(10);
    cout<<"s4 Object is created : "<<endl<<s4.rollno<<endl;
    cout<<s4.age;
    
    return 0;
}