#include <iostream>
using namespace std;
#include <string>
class car
{
private:
    //  this are the member vareables or Data Members
    //char CompaneyName;  we  also use anther , in next line
    string CompaneyName;
    string FuelType;
    string ModelName;
    float Mileag;
    double price;

public:
    // this are the member function
    void setData(string Cname, string Ftype, string MName, float m, double p)

    {
        CompaneyName = Cname;
        FuelType = Ftype;
        Mileag = m;
        price = p;
        
    }
    void displayData()
    {
        cout << "Companey Details\n\n";
        cout << "Companey Name " << CompaneyName << endl;
        cout << "Fuel Type " << FuelType << endl;
        cout << "Mileag " << Mileag << endl;
        cout << "Price " << price << endl;
    }
};

// string CompanyName, FuelType, ModelName;
// float Mileag;
// double Price;
int main()

{
    car car1;

    car1.setData("BMW", "petrol", "23f", 43.3, 323333);
    car1.displayData();
    return 0;
}
