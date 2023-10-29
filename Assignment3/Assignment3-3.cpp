#include <iostream>
using namespace std;
int main()
{
    int num,num1,num2,num3,num4;
    cout << "Amount to be withdraw : ";
    cin >> num;
    num1 = num / 1000;
    num2 = (num % 1000)/100;
    num3 = (num % 1000)%100/50;
    num4 = (num % 1000)%100%50/20;
    cout << "1000 : "<<num1<<endl;
    cout << "100 : "<<num2<<endl;
    cout << "50 : "<<num3<<endl;
    cout << "20 : "<<num4<<endl;

    return 0;
}