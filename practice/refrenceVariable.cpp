#include<iostream>
using namespace std;
int main()
{
    int i = 10;
    int &j = i; //&j is a refrense variable j is not creATing a new memory this will use only i(memory)
    cout <<"your answer "<<i++;
    cout<<i<<endl;
    int *a= &i;
    cout<<++i<<endl;
    cout<<j;

    return 0;
}