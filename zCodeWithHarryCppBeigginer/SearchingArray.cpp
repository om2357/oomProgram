
                        // finding Greatest number in array 
#include <iostream>
using namespace std;

int LinearSearchArray(int array[], int n, int key)
{
    for (int i = 0; i < n; i++) //this is use for traverse the all array Values
    {
        if (array[i] == key) //it is check the all values (value is avalable or not )
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter 'n' value\n ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {

        cout << "enter Array Value \n";
        cin >> array[i];
    }

    int key;
    cout << "enter Key Element \n";
    cin >> key;
    cout <<"available in index number "<< LinearSearchArray(array, n, key);
    return 0;
}