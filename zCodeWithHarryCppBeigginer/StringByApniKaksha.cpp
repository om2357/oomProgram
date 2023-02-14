#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1;
    string str2;
    str1 = "Om_Kumar";
    cout << str1 << endl;
    cout << "Enter your your string\n";
    cin >> str2;
    cout << str2 << endl;
    // printing five times name using the (5,'o')
    string str3(5, 'o');
    // THIS will print only one character so be carefull about that
    cout << str3 << endl;

    // cout<<"How to print full sentance not a word 'using Getline': "<<endl;
    // getline(cin, str3);
    // cout<<str3;

    //How to append the two string or adding the two string 

    string str4 = "fam";
    string str5 = "ily";
    str4.append(str5);
    cout<<"Your added string is : "<<str4<<endl;
    
    // we can also do some other thigs

    string str6 = "hello";
    string str7 = "Om-Kumar";
    str6 = str6 + str7;
    cout<<str6<<endl;
    
    cout<<str6[7];//particular index of string

    cout<<"how to clear a string"<<endl;
    str6.clear();
    cout<<str6<<endl;

    cout<<"string comparision equal or not "<<endl;

    string s1 = "abc";
    string s2 = "abc";
    cout<<s2.compare(s1)<<endl;  





    return 0;
}