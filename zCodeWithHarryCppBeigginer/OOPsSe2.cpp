#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string CompaneyName;
    int Age;

    void EmployeeDetail()
{
    cout << "name - " << name << endl;
    cout << "Companey Name - " << CompaneyName << endl;
    cout <<"Age - "<<Age;
    cout<<endl<<endl;
}

public:
 Employee(string Name,  string Companey ,int age){
name =Name;
CompaneyName = Companey;
Age = age ;
}
};
// constructer have does not return type
int main()
{

    // Employee employee1;
    // employee1.name = "omkumar";
    // employee1.CompaneyName = "microsoft";
    // employee1.Age = 18;
    // employee1.EmployeeDetail();

    // Employee employee2;
    // cout<<endl;
    // employee2.name = "Vijay";
    // employee2.CompaneyName = "Google";
    // employee2.Age = 18;
    // employee2.EmployeeDetail();  
   
//   we can also use other type for our convinent 

Employee employee1 ("om kumar", "Google ",18);
Employee employee2 ("Vijay" ,"Google", 18);
Employee employee3 ("shivam","Googe",18);
employee1.EmployeeDetail();
employee2.EmployeeDetail();
employee3.EmployeeDetail();

    return 0;
}

