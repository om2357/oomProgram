#include <iostream>
using namespace std;
//#include <string>

void Reverse(string & arr, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(arr[i],arr[j]);
    i++;
    j--;
    Reverse(arr,i,j);
}
int main()
{
    string name ="om\n\n";
    Reverse(name,0,name.length()-1);
    cout<<name;
    

    return 0;
}