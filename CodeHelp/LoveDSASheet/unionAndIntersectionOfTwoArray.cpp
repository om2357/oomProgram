#include <iostream>
#include <bits/stdc++.h>
//#include <map>
using namespace std;
int main()
{
    int t;
    cout << "enter the value of t\n";
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> map;
        int n, m;
        int a[20], b[20];
        cout << "enter your array size for n & m\n";
        cin>>n>>m;
        cout<<"enter the value of a[]\n";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            map[a[i]]++;
        }
        cout<<"enter the value of b[]";
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            map[b[i]]++;
        }
        cout << map.size() << endl;
    }

    
    return 0;
}