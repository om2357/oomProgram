// recursion is, when funtion is caling itself

#include <iostream>
using namespace std;

int factorial(int n)
{   cout<<"your value of N : "<<n<<endl;
    if (n == 0)
    {
        return 1;
    }
    int smallOutput = factorial(n - 1);
    //cout<<"your value of smallOutput : "<<smallOutput<<endl;
    return n * smallOutput;
}
int main()
{
    int n;
    cout << "enter your n value\n";
    cin >> n;
    int output = factorial(n);
    cout <<"your Factorial value is : "<< output << endl;
    cout<<"this is also work for you : "<< factorial(n);
    
    return 0;
   
}