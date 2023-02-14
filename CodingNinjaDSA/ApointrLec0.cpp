//pointer are variable which stores the addres of other variable 
#include<iostream>
using namespace std;
 int main ()
{
  
    int a= 32;
    cout<<"this is adrees of i in your laptop memory : "<<&a<<endl;
    int*p=&a;
    cout<<*p<<endl;//this give value
    cout<<p<<endl;//this give address
    


    cout<<sizeof a;
     return 0;
     
}