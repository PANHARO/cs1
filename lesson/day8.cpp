#include <iostream>
using namespace std;
int check_odd_even(int a, int b)
{
    if (a%2==0){
        return a;
    }
    else if (b%2==0){
        return b;
    }
    else{
        return -1;
    }
}
double calculateArea(double length, double width){
    return length * width;
}
double unitPrice(double diameter, double price){
    double radius = diameter /2;
    double area = 3.14 * radius * radius;
    double unit_price = price / area;
    return unit_price;
}
int main()
{
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // int result = check_odd_even(num1, num2);
    // if (result != -1)
    // {
    //     cout << "The even number is: " << result << endl;
    // }
    // else
    // {
    //     cout << "No even number found." << endl;
    // }
    // double width1, length1;
    // double width2, length2;
    // cout<<"Enter the length and width for the Rectangle 1: ";
    // cin>>width1>>length1;
    // cout<<"Area of Rectangle 1: "<<calculateArea(width1, length1)<<endl;
    // cout<<"Enter the length and width for the Rectangle 2: ";
    // cin>>width2>>length2;
    // cout<<"Area of Rectangle 2: "<<calculateArea(width2, length2)<<endl;
    double diameter, price;
    cout<<"Enter the diameter of the pizza 1: ";
    cin>>diameter;
    cout<<"Enter the price of the pizza 1: ";
    cin>>price;
    double result = unitPrice(diameter,price);
    cout<<"The price per unit area of the pizza 1 is: "<<result<<"$/cm^2"<<endl;
    double diameter2, price2;
    cout<<"Enter the diameter of the pizza 2: ";
    cin>>diameter2;
    cout<<"Enter the price of the pizza 2: ";
    cin>>price2;
    double result2 = unitPrice(diameter2,price2);
    cout<<"The price per unit area of the pizza 2 is: "<<result2<<"$/cm^2"<<endl;
    return 0;
}