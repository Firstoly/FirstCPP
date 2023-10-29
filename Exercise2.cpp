#include <iostream>
#include <cmath> //pow
using namespace std;
int main ()
{   
    float total,num,poin;
    cout << "Circle radius (real number)? ";
    cin >> num;
    cout << endl;
    total = pow(num,2)*3.1415;
    poin = (2*3.1415)*num;
    cout << "Area of circle with radius "<<  num << " is " << total << endl;
    cout << "Circumfernce is "<< poin;
    return 0;
}