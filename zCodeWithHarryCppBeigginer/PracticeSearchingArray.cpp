#include <iostream>
using namespace std;

int LinearSearch(int array[], int num, int key)
{
    for (int i = 0; i < num; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
       
    }
     return -1;
}
int main()
{
    int num;
    cout << "enter a number\n";
    cin >> num;

    int array[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter your arra vallue\n";
        cin >> array[i];
    }
    int key;
    cout << "enter your key for searching the element\n";
    cin >> key;

    cout <<"yor index  number is "<< LinearSearch(array, num, key);

    return 0;
}