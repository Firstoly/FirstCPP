#include <iostream>
using namespace std;
int main ()
{
    int price,tax;
    float vat;
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter vat (%) : ";
    cin >> vat;
    tax = (price*(vat/100))+price;
    cout << endl;
    cout << "Net Price product = "<< tax;
    return 0;
}