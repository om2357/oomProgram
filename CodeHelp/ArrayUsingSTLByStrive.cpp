#include<iostream>
using namespace std;
#include <array>
int main()
{
    array<int , 5> arr;
    arr.fill(10);  // this will fill entire array by the 10

    //how to print the array usig for loop 

    for(int i = 0 ; i< 5; i++) 
    {
        cout<<arr.at(i)<<" ";
    }

//    iterators :- begin(), end(), rbegin(), rend() 
//    array are in contigues location so the {begin()} is alwaes point the first array index location 
//    in the same time {rbegine()} is use for the reverse begine lets supoose array is....
//    1 to 10 then rbegine is alwas point the last index of the array it means 10;





    return 0;
}