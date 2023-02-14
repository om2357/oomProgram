#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
public:
    
    int age;
    bool gender;

    void printDetail()
    {
        cout << "name = "<< name <<endl;
       
        cout << "age = "<< age <<endl;
      
        cout << "gender = "<< gender <<endl;
       
    }
    
    void setName(string n)
    {
        name = n;
      
    }
};
int main()
{
    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        string n;
        int a;
        cout << "name = ";
        cin >> n;
        arr[i].setName(n);

        cout << "age = ";
        cin>>arr[i].age;
        cout << "gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printDetail();
    }

    return 0;
}