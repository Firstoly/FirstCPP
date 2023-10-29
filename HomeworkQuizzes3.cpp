#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float first,second,third,mid,final,qtotal,Total;
    cout << "========QUIZZES========\n";
    cout << "Enter first quizz  (10): ";
    cin >> first;
    cout << "Enter second quizz (10): ";
    cin >> second;
    cout << "Enter third quizz  (10): ";
    cin >> third;
    qtotal = (first+second+third)/3;
    cout << "========MID-TERM========\n";
    cout << "Enter mid-term (40): ";
    cin >> mid;
    cout << "========FINAL========\n";
    cout << "Enter final (50): ";
    cin >> final;
    Total = (mid + final)+qtotal;
    cout << "Quizz Total : "<< qtotal << endl;
    cout << "Mid term : "<< mid << endl;
    cout << "Final : "<< final << endl;
    cout << "Total : "<< Total;
    cout << "\n** Your score is " << ((Total>=50) ? "pass!" : "fail!") << endl;

            
           
    

    return 0;
}