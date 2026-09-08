#include<iostream>
using namespace std;

int main(){
    int number1, number2;
    cout<<"Enter first number: ";
    cin>>number1;
    cout<<"Enter second number: ";
    cin>>number2;
    cout<<"------------------Menu------------------------"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    int opt;
    cout<<"Choose an option";
    cin>>opt;
    int sum,sub,mul;
    double div;
    switch(opt){
        case 1:
        sum = number1 + number2;
        cout<<"The addition of "<<number1<< " and "<<number2<<" are "<<sum<<endl;
        break;
        case 2:
        sub = number1 - number2;
        cout<<"The Substraction of "<<number1<< " and "<<number2<<" are "<<sub<<endl;
        break;
        case 3:
        mul = number1 * number2;
        cout<<"The multiplication of "<<number1<< " and "<<number2<<" are "<<mul<<endl;
        break;
        case 4:
        if (number2 == 0){
            cout <<"You cannot divide by 0.";
        }
        else{
        div = number1 / number2;
        cout<<"The division of "<<number1<< " and "<<number2<<" are: "<<div<<endl;
        }
        break;
    }
    return 0;
}