// OOPs - Classes and object

// C++ --> initially called --> C with classes by stroustroup
// Class --> extention of structure (in C)
// structure had limitation
// --> member re public
// --> no method
// Classes --> structure + More
// Classes --> ccan have methods and properties
// Classes --> can have few members as Private & Few as Publict
// Structure in C++ are Typedefed

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};
void binary ::read(void)
{
    cout << "enter a binary number \n";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();

    return 0;
}