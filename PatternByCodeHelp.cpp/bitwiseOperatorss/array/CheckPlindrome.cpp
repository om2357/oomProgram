#include<iostream>
using namespace std;
bool CheckPallindromeNo(char name[], int n)
{
    int start = 0;
    int end = n-1;
    while (start<= end)
    {
        if(name[start] != name[end])
        {
            return 0;
        }
        else 
        {
            start++;
            end--;
        }
    }
    return 1;
}
int getlength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[30];
    cout<<"enter your name \n";
    cin>>name;
    cout<<"your name is : "<<name<<endl;
    int length = getlength(name);
    cout<<"your array size is : "<<getlength(name)<<endl;
    cout<<"this is a pallindrome or not :"<<CheckPallindromeNo(name,length);
}