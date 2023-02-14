// 8th lecture how does Funtion and Array are work together

#include<iostream>
using namespace std;
int sum(int *a, int size)//(int a[] ,int size ) we can also write like this because it's treat like a pointer  
                             //but in this line we don't get 40 here we found only 4or 8bit acording to compiler and i got 4 bit
{                            //this is treat like a array this is only a pointer ,this store only address 
    cout<<sizeof(a)<<endl;  // this give only 4bit according to my compiler
    return 0;
}
int main()
{
    int a[10];
               //here it is array and here this is give me 40 bit 
    cout<<sizeof(a)<<endl; //here we got 40bit           
    cout<<sum(a,10)<<endl;
    return 0;
}