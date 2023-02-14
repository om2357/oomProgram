#include <iostream>
using namespace std;
int power(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }
  else
  {
    int prepower = power(n, p - 1);
    // return (n * power(n, p - 1));
    return n * prepower;
  }

  // return p*power(n-1);
  //  cout<<power<<endl;
}
int main()
{
  int n;
  int p;

  cout << "enter your value of N \n";
  cin >> n;
  cout << "enter your power value \n";
  cin >> p;
  cout << power(n, p);

  return 0;
}