#include <iostream>
using namespace std;

int main()
{
    int hours, hourly_rate;
    cout << "How many hours you work in one week?: ";
    cin >> hours;
    cout << "How much you get paid hourly?: ";
    cin >> hourly_rate;

    int totalSalary = 0;
    int regularPay = 0;
    int overtime = hours - 40;
    double overtimePay = 0;
    if (hours > 40)
    {
        regularPay = 40 * hourly_rate;
        overtimePay = overtime * hourly_rate * 1.5;
        totalSalary += regularPay + overtimePay;
    }
    else if (hours > 0)
    {
        regularPay = hours * hourly_rate;
        totalSalary += regularPay;
    }
    cout << "Regular Pay: " << regularPay << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Your weekly salary are: " << totalSalary << endl;
    return 0;
}