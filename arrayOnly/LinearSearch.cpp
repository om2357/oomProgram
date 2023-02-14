#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            return 1; 
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 32, -32, 44, -4, 54, 42};
    int key;
    cout << "enter the value of key :- ";
    cin >> key;
    bool found = search(arr,10,key);
    if(found)
    {
        cout<<"key is present ";
    }
    else
    {
        cout<<"key is not present";
    }
    return 0;
}