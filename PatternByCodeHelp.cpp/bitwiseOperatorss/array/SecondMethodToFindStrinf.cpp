// by coding ninja 
#include<iostream>
using namespace std;
int GetLength(char s[])
{
    if(s[0] =='\0')
    {
        return 0;
    }
    int smallstring =GetLength (s+1);
    return smallstring +1;
}
int main()
{
    char s[20];
    cout<<"enter your string :";
    cin>>s;
    //cout<<endl;
    cout<<"your string is Length :";
    int length = GetLength(s);
    cout<<length;
    return 0;
}