#include<iostream>
using namespace std;

int main(){
    // bool menu = true;
    // do{
    //     cout<<"----------------------------------------------"<<endl;
    //     int opt;
    //     cout<<"List of mathematical operations"<<endl;
    //     cout<<"1. Addition"<<endl;
    //     cout<<"2. Substraction"<<endl;
    //     cout<<"3. Multiplication"<<endl;
    //     cout<<"Enter a valid option: ";
    //     cin>>opt;
    //     switch(opt){
    //         case 1:
    //             int a,b;
    //             cout<<"Enter a numbers: ";
    //             cin>>a;
    //             cout<<"Enter another number: ";
    //             cin>>b;
    //             cout<<"The sum is: "<<a+b<<endl;
    //             break;
    //         case 2:
    //             int c,d;
    //             cout<<"Enter a numbers: ";
    //             cin>>c;
    //             cout<<"Enter another number: ";
    //             cin>>d;
    //             cout<<"The substraction is: "<<c-d<<endl;
    //             break;
    //         case 3:
    //             int e,f;
    //             cout<<"Enter a numbers: ";
    //             cin>>e;
    //             cout<<"Enter another number: ";
    //             cin>>f;
    //             cout<<"The multiplication is: "<<e*f<<endl;
    //             break;      
    //         default:
    //             cout<<"Invalid option! Exiting..."<<endl;
    //             menu = false;
    //     };
    // }while(menu == true);
    int number;
    do{
         cout<<"----------------------------------------------"<<endl;
        cout<<"List of mathematical operations"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Substraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"Enter a valid option: ";
        cin>>number;
    }while(number == 1 || number == 2 || number ==3);
    return 0;
}