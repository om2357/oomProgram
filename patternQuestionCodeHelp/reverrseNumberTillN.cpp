#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number \n";
    cin>>num;
    int i = 1;
    while(i<=num)
    {
        int j= 1;
        while(j<=num)
        {
            cout<<num-j+1;//n-j+1
            j=j+1;
        }
        cout <<endl;
        i = i+1;

    }
    return 0;
}