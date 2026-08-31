#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // double price = 2.5;
    // cout<<fixed<<setprecision(2);
    // cout<<price<<endl;
    string studentName;
    int studentAge;
    double studentGPA;
    char studentGrade;
    bool enrollmentStatus;

    cout << "Enter the student name: ";
    cin >> studentName;

    cout << "Enter the student age: ";
    cin >> studentAge;

    cout << "Enter the student GPA: ";
    cin >> studentGPA;

    cout << "Enter the student grade: ";
    cin >> studentGrade;

    cout << "Enter the student enrollment status: ";
    cin >> enrollmentStatus;

    cout << "----------------------------------------------" << endl;
    cout << "Display all value: " << endl;
    cout << "Student name: " << studentName << endl;
    cout << "Student age: " << studentAge << endl;
    cout << fixed << setprecision(2);
    cout << "Student GPA: " << studentGPA << endl;
    cout << "Student Grade: " << studentGrade << endl;
    cout << boolalpha;
    cout << "Student enrollment status: " << enrollmentStatus << endl;
    return 0;
}