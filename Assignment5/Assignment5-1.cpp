#include <iostream>
using namespace std;
void CalCircle();
void Rectangle();

int main ()
{   
    //เขียนโปรแรกมสร้าง function  CalRec()

    char Ch;
    do{
        cout << "Program Calculate of Cirle. "<< endl;
        cout << "***************************"<< endl;
        cout << "1. Circle"<<endl;
        cout << "2. Rectangle"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Choose Menu : ";
        cin >> Ch;
        if (Ch == '1') CalCircle();
            else if (Ch == '2') Rectangle();
                else if (Ch == '3')
                {
                    cout << "Exit "<<endl;
                    break;
                } 
                    else cout << "Wrong Menu" <<endl;
    }while (Ch != 3);
    system ("pause");
    return 0;
}     

void CalCircle()
{
    float Radius, Area, Circumference;
    cout << "Input radius : ";
    cin >> Radius;
    Area = 3.14f*Radius*Radius;
    Circumference = 2*3.14*Radius;
    cout << endl;
    cout << "Area of circle :"<< Area << endl;
    cout << "Circmference of cirle : "<<Circumference <<endl;
    cout << "Diameter of circle : "<< (2*Radius) <<endl;
}
void Rectangle()
{
    int Wide, Long, sum;
    cout << "Input Wide : ";
    cin >> Wide;
    cout << "Input Long : ";
    cin >> Long;
    sum = Wide * Long;
    cout << endl;
    cout << "Wide of Long : "<< sum <<endl;

}