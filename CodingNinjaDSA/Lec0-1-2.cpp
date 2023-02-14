                            //pointer

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p = &i;
    int *q = p;

    cout << sizeof(*p) << endl;
    cout << i << endl;
    cout << *p << endl;

    i++;

    cout << "we can change the value of i using i++ \n";

    cout << i << endl;
    cout << *p << endl;

    cout << "Here our value is change uper side in both \n";

    int a = *p;
    cout << a << endl;
    a++;
    cout << "our value a is 10 but now it is change \n";
    cout << a << endl;
    cout << *p << endl;
    cout << "our value of *p is not change \n";

    i = 12;
    cout << "I can change the value of i so our value is reflect both side i -->is change and also *p\n";
    cout << i << endl;
    cout << *p << endl;
    cout << "now the value is change both of them \n";

    *p = 32;
    cout << "I can change the value of *p so our value is reflect both side i -->is change and also *p\n";
    cout << i << endl;
    cout << *p << endl;
    cout << "now the value is change both of them \n";

    (*p)++;

    cout << i << endl;
    cout << *p << endl;

    return 0;
}