#include <iostream>
using namespace std;
#include <string.h>
class Student
{
    int age;
    char *name;

    public :
    Student(int age, char * name)
    {
         this-> age = age ;
        // this -> name =name;//shallow copy
        
        //deep copy 

            this -> name =new char[strlen(name)+ 1];
            strcpy(this ->name ,name);
    }
    
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }



};
int main()
{
    char name[] = "absde";
    Student s1(29,name);
    s1.display();
     
    name[0] = 'z';
    Student s2(24,name);
    s2.display();
    
    s1.display();
    // so we got final answer using deep copy


    return 0;
}