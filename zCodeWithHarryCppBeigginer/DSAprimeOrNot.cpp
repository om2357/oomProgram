#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "enter a number\n";
    cin >> number;
    bool flag = 0;

    for (int div = 2; div <= sqrt(number); div++)    //this is a upgrade version of checking prime number  
    {                                               // we know 1 is allways devisibal by all number 
        if (number % div == 0)                      //sqrt is a predefine in cmath this is give a output of
        {                                          //we already check this number , half of square root 
            cout << "number is not prime\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"this is prime number"<<endl;
    }

    return 0;
}