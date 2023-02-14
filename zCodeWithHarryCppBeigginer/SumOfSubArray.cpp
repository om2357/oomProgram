// Subarray is a continous part of array .

// subsequence is a sequence that can be derived aan array by selecting
// zero or more element ,without changing the order of the remaining element

// like :-  1 2 0 7 2 0 2
//           |   | |
//    2 7 2  is a subsequence of array

//    every  subarray is a subsequence  but every  subsequence is not
//    a subarray

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "enter a number" << endl;
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "enter the array value ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        for (int j = i; j < num; j++)
        {

            sum += arr[j];
            cout << sum << endl;
        }
    }

    return 0;
}
