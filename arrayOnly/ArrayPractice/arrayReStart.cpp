#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    cout<<"printing the array"<<endl;
    for (int i = 0; i <= 20; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<"Printing DONE";
}
int main()
{
    int arr[10];
    cout << "Your array value in index Number 10 --> " << arr[9] << endl;
    cout << "Your array value in index Number 5 --> " << arr[4] << endl;

    // other type of initializing

    int arr2[3] = {10, 21, 22};
    cout << "value of array index  --> " << arr[2] << endl;

    // how to retrive the array

    cout << "printing the array using For Loop" << endl;

    int arr3[20] = {21, 2, 3, 35, 54, 5, 42, 12};
    // for (int i = 0; i <= 20; i++)
    // {
    //     cout << arr3[i] << " ";
    // }
    print(arr3,20);

    return 0;
}