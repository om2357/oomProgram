#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    int rollNumber;
    
    private:  
    int classs = 12;
    int marks = 483;

    public:
    void display()
    {
        cout<<"your classs is : "<<classs<<endl;
        cout<<"your total marks is : "<<marks<<endl;
    }
    void setclasss(int a,int b)
    {
        classs = a;
        marks = b;
    }


};
int main()
{
    student s1;
    student s2;

    s1.age = 21;
    s1.rollNumber = 3;
    cout<<"your display function for s1 : "<<endl;
    s1.display();
    s1.setclasss(13,444);
    s1.display();
    
    //this is static alocation
    cout<<"age of student 1 : "<<s1.age<<endl;
    cout<<"rollNumber of student 1 : "<<s1.rollNumber<<endl;

    // this is dynamicaaly allocation

    student *s3 = new student;
    s3 ->age = 28;
    s3 ->rollNumber = 4;
    cout<<"your display function is call for s3"<<endl;
    s3->display();


    cout<<"first value of s3 age is :"<<s3->age<<endl;
    cout<<"first value of s3 rollNumber is : "<<s3->rollNumber<<endl;

    // we can also write like this

    (*s3).age = 22;
    (*s3).rollNumber = 5;

    cout<<"second value of s3 is : "<<s3->age<<endl;
    cout<<"second value of s3 is : "<<s3->rollNumber;

    return 0;
}