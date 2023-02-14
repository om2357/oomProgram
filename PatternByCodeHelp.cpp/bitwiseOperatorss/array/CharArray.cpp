#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout <<"enter your char array value \n";
    cin>>name;
    name[2]= '\0';//this will put a null character so after that 0, 1, then break the statement
    cout<<"your name is "<<name<<endl;

    return 0;
}