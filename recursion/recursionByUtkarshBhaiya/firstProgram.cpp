#include<iostream>
using namespace std;
void say_hello(int n)
{
    if(n==0) //base case , stopping case , initial case
    {
         return;
    }

    cout<<"hello "<< n<<endl;
    say_hello(n-1); 
    cout<<"hello "<< n<<endl;

    
}
int main()
{
    say_hello(10);
    return 0;
}