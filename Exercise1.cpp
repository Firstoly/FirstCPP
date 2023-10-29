#include <iostream>
using namespace std;
int main()
{
    int length,widht,sum;
    cout << "Program Calculate Area Rectangle\n";
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Widht : ";
    cin >> widht;
    sum = length * widht;
    cout << endl;
    cout << "Area of Recatagle = "<< sum <<endl;

    return 0;
}