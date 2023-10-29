#include <iostream>
#include <iomanip>

using namespace std;
float CheckGPA(string num);
string CheckGreade(int num);

int main()
{

    // หาค่า GPA Array 2 miti
    float sum=0;
    int num[3][3];
    string name[3];

    for (int i=0; i<3; i++)
    {   
        cout << "student "<<i+1<<endl;
        cout << "Enter Name "<<"["<<i+1<<"] : ";
        cin >> name[i];
        for (int j=0; j<3; j++)
        {
            cout << "Socre ["<<i<<"]["<<j<<"] : ";
            cin >>num[i][j];
        }
    }
    cout << "Show score"<<endl;
    cout << endl;
    cout << "-----------------------------------------------------------------"<< endl;
    cout << "student"<<setfill(' ')<< setw(15)<< "Math"<< setfill(' ')<< setw(11) << "Science" << setfill(' ') << setw(9)<<"Engish"<< setfill(' ')<< setw(7) << "GPA"<< "" << endl;
    cout << "-----------------------------------------------------------------"<< endl;
    cout << endl;
    for (int i = 0; i<3 ;i++)     
    {    cout << setfill(' ')<< " " << i+1 << "  " << left << setw(8) << name[i];
        for (int j =0; j<3; j++)
        {
            string grade = CheckGreade(num[i][j]);
            float Gpa = CheckGPA(grade);
            
            cout << right << setw(8)<< num[i][j]<< grade;
            sum += Gpa;
        }
        cout << right<<setw(10)<<fixed<<setprecision(2) <<sum/9.0;
        sum = 0;
        cout << endl;
    }
   
    
    
    cout << "-------------------------------------------------"<< endl;
    
    
    cout << endl;
    system ("pause");
    return 0;
}


string CheckGreade(int num)
{
    int    poin[]={ 0 , 50, 55 , 60, 65 , 70, 75 , 80} ;
    string grade[]={"F","D","D+","C","C+","B","B+","A"},result;
   
    for (int n=0; n<8; n++)
    {
        if (num >= poin[n])
        {
            result = grade[n]; 
        }
    }
    return result;
}

float CheckGPA(string num)
{   
    string Grade[]={"F",  "D", "D+", "C", "C+", "B", "B+", "A"};
    float grade[]={ 0.0 , 1.0, 1.5 , 2.0, 2.5 , 3.0, 3.5 , 4.0},result;

        
        for (int k=0; k<8; k++)
        {
            if(num == Grade[k])
            {
                result = grade[k]*3.0;
            }
        }
        return result;
}