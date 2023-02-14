#include <iostream>
using namespace std;

int main()
// pointer arthmatics
{
    int marks[4] = {23, 44, 445, 322};
    int *p = marks;
    cout << "the value of *(p)   is : " << *(p)<<endl;
    cout << "the value of *(p+1) is : " << *(p+1)<<endl;
    cout << "the value of *(p+2) is : " << *(p+2)<<endl;
    cout << "the value of *(p+3) is : " << *(p+3)<<endl;
cout<<endl<<endl;
    // int*p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    return 0;
}