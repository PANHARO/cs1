#include<iostream>
using namespace std;
double bill_calculation(double meal_price, double tip){
    const double tax = meal_price * 0.08;
    if (tip==0){
        double total_bill =  meal_price + (meal_price* tax);
    }
    else if(tip>=15 && tip<=20){
        double total_bill =  meal_price + (meal_price* tax) + (meal_price* tip / 100);
    }
}
double bill_per_person(double bill, int customer){
    double cost_per_person = bill / customer;
    return cost_per_person;
}
int main(){
    double meal, tip;
    int customer;
    cout<<"Enter the price of the meal: ";
    cin>>meal;
    cout<<"Enter the tip: ";
    cin>>tip;
    double total_cost = bill_calculation(meal,tip);
    cout<<"Enter the cost per person: ";
    cin>>customer;
    double cost_per_person = bill_per_person(total_cost,customer);
    cout<<"The total cost: "<<total_cost;
    cout<<"Cost per person: "<<cost_per_person;
    return 0;
}