#include <iostream>
using namespace std;
void displayGrade(int grade)
{
    if (grade >= 90)
    {
        cout << "Grade A" << endl;
    }

    else if (grade >= 80)
    {
        cout << "Grade B" << endl;
    }

    else if (grade >= 70)
    {
        cout << "Grade C" << endl;
    }

    else if (grade >= 60)
    {
        cout << "Grade D" << endl;
    }

    else if (grade >= 0)
    {
        cout << "Grade F" << endl;
    }
}
int main()
{
    int grade;
    cout << "Enter your score: ";
    cin >> grade;
    displayGrade(grade);

    return 0;
}