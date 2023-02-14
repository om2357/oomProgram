#include <iostream>
using namespace std;
int sum(int num1, int num2)
{
    int result;
    result = (num1 + num2);
    return result;
}
int main()
{   
    int res;
    int a=10;
    int b=20;
    res=sum(a,b);
    cout<<a<<"+"<<b<<"="<<res<<endl;
    
    return 0;
}
