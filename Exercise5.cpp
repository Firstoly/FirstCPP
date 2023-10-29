#include <iostream>
#include <string>
using namespace std;
int main()
{   
    //การรับค่าเงินเดือนและคำนวณค่าคอมมิชชั่น
    
    char menu;
    int sale,salary,com;

    do{

        cout<<"1. Input salary\n";
        cout<<"2. Input Sale\n";
        cout<<"3. Report\n";
        cout<<"4. Exit\n";
        cout<<"Enter menu : ";
        cin>>menu;

    if(menu == '1')
    {   
        cout<<"Input Salary : ";
        cin>>salary;
        cout << endl;

    }
    
    else if(menu == '2')
    {   
        cout<<"Input Sale : ";
        cin>>sale;
        cout << endl;

    }
    
    else if(menu == '3')
    {
        cout<<"----------------------\n";
        cout<<"Salary       =   "<< salary <<endl;
        cout<<"Sale         =   "<< sale <<endl;
        if(sale >20000)
            com = sale*0.15;
        else if(sale > 10000)
            com = sale * 0.10;
        else com = sale * 0.05;
        cout<<"Commission   =   "<< com <<endl;
        cout<<"Total        =   "<< salary + com <<endl;
        cout<<"----------------------\n";
        cout << endl;

    }
    
    else if(menu == '4')
    {
        cout<<"---Exit---\n";
    }
    
    else
    {
        cout<<"You Input the wrong menu!!!.\n";
    }
    
    }while(menu != '4');
    cout << endl;
    system("pause");
    return 0;
}