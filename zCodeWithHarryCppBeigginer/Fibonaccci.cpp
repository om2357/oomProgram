#include<iostream>
using namespace std; 
//0,1,1,2,3,5,8  
//addition of last tow numbers
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        //cout<<a<<endl;
        int c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
    

    return 0;
}