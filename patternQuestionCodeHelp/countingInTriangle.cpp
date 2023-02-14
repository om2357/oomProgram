#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"enter your value of number\n";
    cin>>num;
    int i = 1;
    int count =1;
    while (i<=num)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count<<" ";
            j=++j;
            count=count +1;    
        }
        cout<<endl;
        i=++i;
    }
    return 0;
}