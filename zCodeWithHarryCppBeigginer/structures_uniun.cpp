#include <iostream>
using namespace std;

typedef struct employe              // we can also use typedef (befote struct employe)
{
    int eid;
    char FavChar;
    long int salary;                 
} ep;                         // and then in last line befor semicolum we write ep


// union money            
// {
//     int eid;
//     char FavChar;
//     long int salary;
                               
// };                               

int main()
{
    ep vijay;
    struct employe om;               // without using struct employe (we can only wright -->ep om )
    
    om.eid = 1;
    om.FavChar = 'o';
    om.salary = 15000000;
    cout << om.eid << endl;
    cout << om.FavChar << endl;
    cout << om.salary << endl;


    return 0;
}
