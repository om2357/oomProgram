#include<iostream>
using namespace std;
bool Palindrom(string name, int i, int j)
{
    if(i>j)
    {
        return true;
    }
    if(name[i]!= name[j])
    {
        return 0;
    }
    else
    {
        return Palindrom(name,i+1,j-1);
    }
}
int main()
{
    string name = "bookkoob";
    cout<<endl;
    bool ispalindrome = Palindrom(name , 0 ,name.length()-1);
    
    if (ispalindrome)
    {
        cout<<"this is palindrom\n";
    }
    else
    {
        cout<<"this is not a palindrom\n";
    }
    
    return 0;
}