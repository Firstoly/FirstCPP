#include <iostream>
using namespace std;
int main()
{
    //เขียนโปรแกรมคำนวณอายุจากปีเกิดที่ป้อนจากผู้ใช้
    int year,age;
    string name;
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter Year of birth : ";
    cin >> year;
    age = 2023-year;
    cout << age;
    return 0;
}