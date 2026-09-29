#include <iostream>
using namespace std;

int main()
{
    int age1, age2, temp;
    cout << "Enter an age: ";
    cin >> age1;
    cout << "Enter another age: ";
    cin >> age2;
    cout << "Age before swapping: " << endl;
    cout << "First age: " << age1 << " Second age: " << age2 << endl;
    temp = age1;
    age1 = age2;
    age2 = temp;
    cout << "Age after swapping: " << endl;
    cout << "First age: " << age1 << " Second age: " << age2 << endl;
    return 0;
}