#include<iostream>
using namespace std;

int main(){
    // int day;
    // cout<<"Enter a day number(1-7): ";
    // cin>>day;

    // switch(day){
    //     case 1:
    //     cout<<"Monday"<<endl;
    //     break;
    //     case 2:
    //     cout<<"Tuesday"<<endl;
    //     break;
    //     case 3:
    //     cout<<"Wednesday"<<endl;
    //     break;
    //     case 4:
    //     cout<<"Thursday"<<endl;
    //     break;
    //     case 5:
    //     cout<<"Friday"<<endl;
    //     break;
    //     case 6:
    //     cout<<"Saturday"<<endl;
    //     break;
    //     case 7:
    //     cout<<"Sunday"<<endl;
    //     break;
    //     default:
    //     cout<<"Invalid day number"<<endl;
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Excellent."<<endl;
        break;
        case 'B':
        cout<<"Good."<<endl;
        break;
        case 'C':
        cout<<"Average."<<endl;
        break;
        case 'D':
        cout<<"Needs Improvement."<<endl;
        break;
        case 'F':
        cout<<"Failed."<<endl;
        break;
        default:
        cout<<"Invalid Grade."<<endl;

    }
    return 0;
}