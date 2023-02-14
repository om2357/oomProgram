//vector template, ... in Stander Template Library
//vector is dynamic array 
//in the vector , if array size is 5 and we put the 6th element then (read next line)
//vector will automatically double

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> create;  //here we create a vector veriable
    cout<<"Capacity of vector is : "<<create.capacity()<<endl;  //now in the vecter hava 0 capacity
    create.push_back(1); // puting a value in the vector using (puch_back) operater
    cout<<"Capacity of vector is : "<<create.capacity()<<endl; // now the Capacity of vector is increase by"1"
    

    create.push_back(4); //putting another value in vector
    cout<<"Capacity of Vector is : "<<create.capacity()<<endl;
    create.push_back(3);
    cout<<"Capacity of vector is : "<<create.capacity()<<endl;
    // now the Capacity will double of "2" because vector will automatically double there size
    
    cout<<"capacity will soo you how much space in there vector \n";

    cout<<"Size of vector is : "<<create.size()<<endl;
    // Size will soo the how much elements are in there Vector
    cout<<"Size will soo you how much elemnt are there"<<endl;

    cout<<"Element at 2nd index is : " <<create.at(2)<<endl;
    //we can find out using the elemnt using  (.at) operater

    cout<<"Front Element is : "<<create.front()<<endl;
    cout<<"Back Element is : "<<create.back()<<endl;

    //using thr { front() } operater we can print the front element 
    //using the { back () } operater we can print the last or back element 



    return 0;
}

// note -->>

//  capacity() --> how much space in there vector
//  size()     --> how much elements in the vector
//  front()    --> which elemnt in the front or in first    
//  back()     --> which elemnt in the back or in last 
//  at()       --> which elemnt you want to acces like this :- {create.at(2)}