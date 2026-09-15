#include<iostream>
#include<cmath>
using namespace std;

double side(double a, double b){
        double hypothenus = sqrt(pow(a,2)+pow(b,2));
        return hypothenus;
    }
int main(){
    // double area = 81;
    // double length = sqrt(area);
    // cout<<"The length of one side is: "<<length<<endl;

    // double radius = 5;
    // const double pi = 3.14;
    // double area_circle = pi * pow(radius,2);
    // cout<<"The area of the circle is: "<<area_circle<<endl;

    
    double a,b;
    cout<<"Enter two shorter sides of a right triangle: ";
    cin>>a>>b;
    cout<<"The longest side of the right triangle is: "<<side(a,b)<<endl;
    // double rounded_number(double number){
    //     round_num = ceil(number);
    //     cout<<"The rounded number of "<<number<<" is "<<round_num<<endl;
    // }
    return 0;
}