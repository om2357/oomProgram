//0,1,1,2,3,5,8,13,.............this are sum of nfirst two number . 
#include <iostream>
using namespace std ;
int fibonacci(int n )
{
    if(n==1)  //we can also write this if(n==0||n==1)
    {                 //                         {
                      //                          return n;
        return 1;     //                         }  
    }
    if(n==0)
    {
        return 0;
    }
    
    return n= fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    int n ;
    cout <<"enter the value of n \n";
    cin>>n;
    cout<<"your value of fibonacci number is :\n";
    cout<<fibonacci(n);

    return 0;
}