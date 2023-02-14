#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator; // we want to make constructor because i....
                     // want, no garbage value will asign to that vareable
                     // so we make a constructer
public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << this->numerator << " / " << denominator << endl; // this not compulsure
    }

    void simplefy()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd; 
        // GCD = gretest common factor
    }

    void add(Fraction f2)
    {
        int LCM = this->denominator * f2.denominator;
        int x = LCM / denominator;
        int y = LCM / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        numerator = num;
        denominator = LCM;
        simplefy();
    }

    void multiplicaton(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;

        simplefy();

    }
};
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);
    
    f1.print();
    f2.print();

    f1.multiplicaton(f2);
    f1.print();
    f2.print();




    return 0;
}