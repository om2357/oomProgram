#include <iostream>
using namespace std;
int spelling(int n , string str[])
{
    if(n==0)
    {
        return 0;
    }
    spelling(n/10,str);
    cout<<str[n%10]<<" ";
 /* you can also write 
    int answer = n%10;
    cout<<str[answer]<<" "; */
}
int main()
{
    int n;
    cout << "enter your value of N\n";
    cin >> n;

    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout << "your answer is :";

    spelling(n,str);

    return 0;
}