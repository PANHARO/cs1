#include<iostream>
using namespace std;

int main(){
    //first one
    // for (int i= 1; i<= 10; i++){
    //     cout<<i<<endl;
    // }
    // second
    // for (int i=2; i<=20; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }
    // third 
    // int sum = 0;
    // for (int i = 0; i < 5; i++){ 
    //     int num;
    //     cout<<"Enter a test score: ";
    //     cin>>num;
    //     sum += num;
    // }
    // cout<<"The average test score is: "<<sum<<endl;
    // fourth 
    //fourth
    // int sum = 0;
    // for (int i = 1; i<= 10; i++){
    //     sum +=i;
    // }
    // cout<<sum;
    //fifth 
    string password = "panharo";
    string user_input;
    while (user_input!=password){
        cout<<"Enter the correct password: ";
        cin>>user_input;
    }
    cout<<"Correct password!"<<endl;
    return 0;
}