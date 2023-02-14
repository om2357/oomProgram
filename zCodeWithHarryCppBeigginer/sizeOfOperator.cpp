#include <iostream>
using namespace std;
int main()
{
    float d = 4.55;

    long double e = 45.4544340;
    cout << "\nthe  float value is " << sizeof(45.4544340);
    cout << "\nthe  float value is " << sizeof(45.4544340f);
    cout << "\nthe  long double value is " << sizeof(45.4544340l);
    cout << "\nthe  value of e " << e;

    return 0;
}