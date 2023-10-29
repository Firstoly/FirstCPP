#include<iostream>
using namespace std;
int main()
{
    //แปลงเลขฐํานสองเป็นฐํานสิบ
    int num,sum,n1,n2,n3,n4;
    cout << "Enter binary number : ";
    cin >> num;
    n1 = num / 1000 * 2*2*2;
    n2 = num % 1000 / 100 * 2*2;
    n3 = num % 100 / 10 * 2;
    n4 = num % 10 * 1;
    sum = n1 + n2 + n3 + n4;
    cout << "Demical value of " << num << " = " << sum << endl;
    system("pause");
    return 0;
}