#include<iostream>
using namespace std;

int main(){
    cout <<"Hello World"<< endl;
    int number1;
    int number2;
    cout<<"Enter first number: ";
    cin>>number1;
    cout<<"Enter second number: ";
    cin>>number2;
    int addition = number1 + number2;
    int substraction = number1 - number2;
    int multiplication = number1 * number2;
    int division = number1 / number2;
    cout<<"Display all 4 mathematic calculation (+ - x /) of "<<number1<<" and "<<number2<<endl;
    cout<<"Addition: "<< addition <<endl;
    cout<<"Substraction: "<< substraction <<endl;
    cout<<"Multiplication: "<< multiplication <<endl;
    cout<<"Division: "<< division <<endl;
    return 0;
}
// three type of error in c++
// syntax error, logical error, runtime error


