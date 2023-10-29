#include <iostream>
#include <string>
using namespace std;
int main()
{    
    // หาค่า BMI ที่ใส่ค่าลงไป
    string Name;
    float Weight;
    float Height;
    cout << "Enter Name : " ;
    cin >> Name ;
    cout << "Enter Weight : " ;
    cin >>  Weight ;
    cout << "Enter Height : " ;
    cin >>  Height;
    cout << "BMI = " << Weight / (Height/100 * Height/100) <<endl ;

   
    return (0);

}