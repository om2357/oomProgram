#include<iostream>
using namespace std;
                                    //remove x :- a ,x , d, r, w, x
int length(char str[])                    //    = a, d, r, w
{
    if (str[0]=='\0') 
    {
        return 0;
    }
    int samallString =length (str + 1);
    return 1+ samallString;
    
}
int main()
{
    char str[20];
    cin>>str;
    int l =length(str);
    cout<<l;
    return 0;
}