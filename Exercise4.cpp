#include <iostream>
#include <string>
using namespace std;
int main()
{   
    //การเขียนโปรแกรมตรวจสอบ username and password
    
    char menu;
    string userR, passR, userL, passL;
    cout << "=========== User Accout ===========\n";
    cout << "1) Register\n";
    cout << "2) Login\n";
    cout << "Q) Exit\n";
    cout << "---------------------------\n";
    do
    {
        cout << "\nEnter menu : ";
        cin >> menu;
        cout << endl;
        switch (menu)
        {
        case '1':
        {
            cout << "****** Register ******\n";
            cout << "Input your Username : ";
            cin >> userR;
            cout << "Input your Password : ";
            cin >> passR;
            break;
        }
        case '2':
        {
            do
            {   cout << "****** Login ******\n";
                cout << "Enter Username : ";
                cin >> userL;
                cout << "Enter Password : ";
                cin >> passL;

                if ((userL == userR) && (passL == passR))
                    cout << "\nLogin success.\n";
                else
                    cout << "\nLogin fail.\n";

            } while ((userL != userR) || (passL != passR));
            break;
        }
        case 'Q':
        {
            cout << "... Exit ...\n";
            break;
        }
        default:
            cout << "Invalid menu! try again.\n";
            break;
        }

    } while (menu != 'Q');
   

    cout << endl;
    system("pause");
    return 0;
}