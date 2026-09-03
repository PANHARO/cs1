#include<iostream>
using namespace std;

int main(){
    double weight;
    cout<<"Enter the weight of the package in pounds: ";
    cin>>weight;
    if (weight <=0){
        cout<<"Invalid weight."<<endl;
    }
    else if (weight >10){
        cout<<"Shipping cost = $20.00"<<endl;
    }
    else if (weight >5){
        cout<<"Shipping cost = $12.00"<<endl;
    } 
    else if (weight >2){
        cout<<"Shipping cost = $8.00"<<endl;
    }
    else if (weight >0){
        cout<<"Shipping cost = $5.00"<<endl;
    }
    return 0;
}