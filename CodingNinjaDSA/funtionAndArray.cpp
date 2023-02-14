#include <iostream>
using namespace std;
int sum(int *a, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += a[i];
    }
    return ans;
}
int main()
{
    int a[10] = {1, 3, 4, 4, 3, 2, 4, 2, 3};
    cout << sum(a, 10) << endl;
    cout << sum(a, 5); //using this we can pass a spacific length of array 
    return 0;
}