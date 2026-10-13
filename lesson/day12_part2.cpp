#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int monthlySalary;
    int annualSalary(){
        return monthlySalary * 12;
    }
};
int main(){
    Employee employee1;
    employee1.name = "John";
    employee1.monthlySalary = 1000;
    cout<<"Name: "<<employee1.name<<" Salaries: "<<employee1.annualSalary()<<endl;
    Employee employee2;
    employee2.name = "Sara";
    employee2.monthlySalary = 500;
    cout<<"Name: "<<employee2.name<<" Salaries: "<<employee2.annualSalary()<<endl;

    return 0;
}