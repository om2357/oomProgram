#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your value of  n \n ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter your value of Array\n";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the arry maximum value is :" << max << endl;

//     return 0;
// }


    //  next METHOD TO PRINT THE MAXMIMU NUMBER



// #include <iostream>
// #include <climits>
// using namespace std;
// int main()

{
    int number;
    cout << "enter your number\n";
    cin >> number;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int maxNo = arr[0];
    int minNo = arr[0];

    for (int i = 0; i < number; i++)
    {
        if (arr[i] > maxNo)
        {

           maxNo=arr[i];
        }
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }
    cout << maxNo << endl;
    cout <<minNo << endl;

//     return 0;
// }



// NEXT BETTER APPROACH TO FINDING MAXIMUM ARRAY ELEMENT

// #include <iostream>
#include<climits>
// using namespace std;
// int main()
{
    int number;
    cout << "enter a number \n";
    cin >> number;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < number; i++)
    {
        // maxNo=max(maxNo,arr[i]); this is right
        minNo=min(minNo,arr[i]);
    }

    cout<<"maximum number is "<<maxNo<<endl;
    cout<<"minumum number is "<<minNo;

    return 0;
}
}}