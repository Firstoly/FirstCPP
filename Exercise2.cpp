#include <iostream>
using namespace std;
int main()
{
    char character;
    int number;
    cout << "Input number line :  ";
    cin >> number;
    cout << "Input character : ";
    cin >> character;

    for(int i=0; i<number;i++)
    {
        for (int n=0; n<=i; n++)
        {
            cout << character;
        }
        cout << endl;
    }

    return 0;
}