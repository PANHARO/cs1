#include<iostream>
using namespace std;

int main(){
    int nickel, quarter, dimes;
    cout<<"Enter amount of nickel you have: ";
    cin>>nickel;
    cout<<"Enter amount of quarter you have: ";
    cin>>quarter;
    cout<<"Enter amount of dimes you have: ";
    cin>>dimes;
    float sum = nickel*5 + quarter*25 + dimes*10;
    float dollars = sum / 100;
    cout<<"You have entered: "<<dollars<<" dollars"<<endl;
    return 0;
}