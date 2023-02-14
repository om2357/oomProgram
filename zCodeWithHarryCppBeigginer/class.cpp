#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e ;

    
    void getDatat()
    {
        cout << "the vale of a is " << a << endl;
        cout << "the vale of b is " << b << endl;
        cout << "the vale of c is " << c << endl;
        cout << "the vale of d is " << d << endl;
        //cout << "the vale of e is " << e << endl;
    }
    void enterData(int a1, int b1, int c1);//declaration


};
    void employee ::enterData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee om;
    om.d = 33;
    om.enterData(1, 2, 3);
    om.getDatat();

    return 0;
}