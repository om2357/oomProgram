#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    void input()
    {
        cout<<"enter two integer"<<endl;
        cin>>x>>y;
    }
    void add()
    {
        cout<<"result : "<<x+y;
    }

};
int main()
{
    sum S;
    S.input();
    S.add();

}