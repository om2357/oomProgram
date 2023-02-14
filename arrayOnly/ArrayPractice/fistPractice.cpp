#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<"element of Array "<<i<<":-"<<arr[i]<<" "<<endl;
    }
    cout<<"printing completed "<<endl<<endl;
}
int main()
{
    // similar kind of data contigious location allocation
    int number[15] = {3,4,21};
    cout<<"value at 10 index :- "<<number[10]<<endl;

    int n = 15;
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<" Element of Array "<<i<<" :- "<<number[i]<<endl;
    //     cout<<" ";
    // }
    printArray(number,15);

    int arr1[32] = {23,23,42,43,23,55,665,32};
    printArray(arr1, 32);
    return 0;
}