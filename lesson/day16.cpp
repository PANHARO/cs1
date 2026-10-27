#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    // exercise 1
    // int number[3];
    // for(int i=0; i<2; i++){
    //     cout<<"Enter a number: ";
    //     cin>>number[i];
    // }
    // int third_value = add(number[0], number[1]);
    // number[2] = third_value;
    // cout<<"The third value is: "<<number[2]<<endl;
    // exercise 2 find the lowest and highest number in an array
    int number1[6]={10,15,50,10,100,35};
    // before sorting
    for (int i=0; i<6; i++){
        cout<<number1[i]<<" ";
    }
    cout<<endl;
    // find the lowest and highest number
    int lowest = number1[0];
    int highest = number1[0];
    for(int i=0; i<6; i++){
        if(number1[i]<lowest){
            lowest=number1[i];
        }
        if(number1[i]>highest){
            highest=number1[i];
        }
    }
    cout<<"the lowest number is: "<<lowest<<endl;
    cout<<"the highest number is: "<<highest<<endl;
    return 0;
}