#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void displayData()
    {
        cout << "name = "<< name <<endl;
        // cin >> name;
        cout << "age = "<< age <<endl;
        // cin >> age;
        cout << "gender = "<< gender <<endl;
        // cin >> gender;
    }
};
int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "name = ";
        cin >> arr[i].name;
        cout << "age = ";
        cin >> arr[i].age;
        cout << "gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].displayData();
    }
    return 0;
}