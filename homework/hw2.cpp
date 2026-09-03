#include<iostream>
using namespace std;

int main(){
    int hours,hourly_rate;
    cout<<"How many hours you work in one week?: ";
    cin>>hours;
    cout<<"How much you get paid hourly?: ";
    cin>>hourly_rate;

    int totalSalary = 0;
    int overtime = hours - 40;
    if (hours>40){
        totalSalary += 40 * hourly_rate + (overtime * hourly_rate * 1.5);
    }
    else if (hours > 0){
        totalSalary += hours * hourly_rate;
    }
    cout<<"Your weekly salary are: "<<totalSalary<<endl;
    return 0;
}