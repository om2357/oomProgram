#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 205;
    a++;
    cout << "b = "<<b << endl; // her we know that no changes are accured in j

    // so what can i do for in any changes between i& j will reflect each of them
    //  so we can do that using refrence variable  only i can put --> &j = i then it is called refrence variable
    //  we can aloat a same memory for taht, then it i& j are stored in same memory location

    int i = 10;
    int &j = i; //here j  is not creating a memory 
    cout<<"Here i = "<<i<<endl;
    i++; //we can change the value of i but changes are so in both side 
    cout<<"so change is here "<<j<<endl;

    return 0;
}