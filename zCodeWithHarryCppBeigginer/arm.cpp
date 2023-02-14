#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int origial=n;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    cout<<sum;
    if(sum==origial)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<" it is not a armstrong number";
    }
    return 0;
}