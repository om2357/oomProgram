#include<iostream>
using namespace std;
class Student
{
    int age;
    char *name;

    public :

    Student(int age, char *name)
    {
        this -> age = age;
        this -> name = name;
    }

    void display()
    {
        cout<<name<<" "<<age<<endl;
    }


};

int main()
{
    char name[] = "OmKumar";
    Student s1(20 ,name);
    s1.display();
    
    name[0] = 'a';   //this is called shallow copy
    Student s2(24,name);
    s2.display();

    s1.display();
    cout<<"value of s1 is changed because we can change the arr[0] = too 'a' "<<endl;
    cout<<"here we can use shallow copy "<<endl<<" this will change the element in the same array\n";
    
    cout<<endl<<endl<<endl;

    cout<<"now we can use the deep copy\n --> in the deepCopy.cpp folder";





    return 0;
}