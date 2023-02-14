#include <iostream>
using namespace std;
int factorial(int fact)
{
    if (fact == 0)
    {
        return 1;
    }
    // return fact *factorial(fact-1);
    return fact = fact * factorial(fact - 1); //this all methods are work well you can use any one of them.
    // int answer =fact* factorial(fact-1);
    // return answer;
    
}
int main()
{
    int fact;
    cout << "enter your factorial value \n";
    cin >> fact;
    cout << "your factorial value is \n";
    cout<<factorial(fact);
    
    return 0;
}