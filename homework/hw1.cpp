#include<iostream>
using namespace std;

int main(){
    // Keo Sovannpanharo 8.30.2026 Assignment 1
    // This program will take three input from the user: nicket, quarter and dimes and it will calculate the value
    // with a fixed number conversion to cent and then display the output as dollars and cents.
    // declare variable for the three input 
    int nickel, quarter, dimes;
    // display text and have user input amount
    cout<<"Enter amount of quarters you have: ";
    cin>>quarter;
    cout<<"Enter amount of dimes you have: ";
    cin>>dimes;
    cout<<"Enter amount of nickels you have: ";
    cin>>nickel;
    // calculate total cents
    double sum = nickel*5 + quarter*25 + dimes*10;
    // convert to dollars
    double dollars = sum / 100;
    // display result
    cout<<"The total value is: "<<sum<<" cents or $"<<dollars<<endl;
    return 0;
}