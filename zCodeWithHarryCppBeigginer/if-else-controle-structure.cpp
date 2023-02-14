// BASIC controle STRUCTURE
// 1 ---> Sequencial structure
// i--> if - else statemant
// ii --> if - else lade
// iii --> switch case
// 2 ---> selection structure
// 3 ---> Loop structure
// ------------------------------------*****------------------------------------------------------------------//



#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "tell me your age";
    cin >> age;
    if (age < 18)
    {
        cout << "you can not come to the party";
    }
    else if (age == 18)
    {
        cout << "you are almost a kid so you get a kid pass for the party";
    }
    else
    {
        cout << "you can come to the party";
    }
    return 0;
}