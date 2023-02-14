#include<iostream>
using namespace std;
int main()
{
    int i = 10;
    int*p=&i;

    cout<<p<<endl; //her we can print the addres of i
    cout<<*p<<endl;
    
    //p=p+1;       //this is very denger because we can change the addreas of i
                //her the adding the 1 in addreas value so we can change the other addreas ,, this addres is not allocated for me and change the addres
 //   cout<<p<<endl //i do not do this because i change the addres  

    //this is only use in terms of array only other wise there is no use of pointer arithmatic          

    



    return 0;
}