#include <iostream>
using namespace std;
int main()
{
    //ให้นักศึกษําเขียนโปรแกรมรับค่ําตัวเลขจ ํานวนเต็ม 1 ค่ํา 
    //จำานวน 4 หลักเสมอ แล้วท ํากํารแสดงผลตัวเลขนั้น
    int number,num,num2,num3,num4;
    cout << "Enter binary number : ";
    cin >> number;
    num = number / 1000;
    num2 = (number%1000)/100;
    num3 = (number % 1000)%100/10;
    num4 = (number % 1000)%100%10;

    cout <<num<<"\t"<<num2<<"\t"<<num3<<"\t"<<num4;
   
    return 0;
}