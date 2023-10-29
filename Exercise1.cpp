#include <iostream>
using namespace std;
int main()
{
    int poin;
    cout << "Enter poin your : ";
    cin >> poin;
    do
    {
    if (poin >= 101)
    {
        cout << "Enter not poin !!!";
    }
    else if (poin <= 59)
    {
        cout << "poin you : F ";
    }
    else if (poin <=69)
    {
        cout << "poin you : D ";
    }
    else if (poin <=79)
    {
        cout << "poin you : C ";
    }
    else if (poin <=89)
    {
        cout << "poin you : B ";
    }
    else if (poin <=100)
    {
        cout << "poin you : A ";
    }
    break;
    } while (poin != 101);
    
    cout << endl;
    system ("pause");
    return 0;
} 