#include <iostream>
#include <string>
using namespace std;

int main()
{
    //menu salary and commission หาค่าคอมชั่น
    char menu;
    int  salary, sale,commission,total;

    cout << "1) Input salary\n";
    cout << "2) iInput sale\n";
    cout << "3) Report\n";
    cout << "4) Exit\n";
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
            cout << "Input salary : ";
            cin >> salary;
            break;
        }
        case '2':
        {
            cout << "****** Register ******\n";
            cout << "Input sale : ";
            cin >> sale;
            break;
        }
        case '3':
        {
            cout << "---------------\n";
            cout << "Salary        = "<< salary << endl;
            cout << "Sale          = "<< sale << endl;
                if (sale > 20000)
                {
                    commission = sale * 0.15;
                }
                else if (sale <= 20000)
                {
                    commission = sale * 0.10;
                }
                else if (sale <= 10000)
                {
                    commission = sale * 0.05;
                }
                cout << "commission    = "<< commission << endl;
                total = salary + commission;
                cout << "Total         = "<< total << endl;
            break;
        }
        case '4':
        {
            cout << "... Exit ...\n";
            break;
        }
        default:
            cout << "Invalid menu! try again.\n";
            break;
        }

    } while (menu != '4');
    

    cout << endl;
    system("pause");
    return 0;
}