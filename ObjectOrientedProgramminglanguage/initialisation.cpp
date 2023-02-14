#include<iostream>
using namespace std;
class student
{
    //public:
    private:
    int age;
    int const rollnumber;

    //makinng our own constructer
    public:
    student(int r , int a) : rollnumber(r),age(a)
    {

    }
    void print()
    {
        cout<<rollnumber<<" "<<age<<endl;
    }


};
int main()
{
    student s1(101,18);
    s1.print();




    return 0;
}