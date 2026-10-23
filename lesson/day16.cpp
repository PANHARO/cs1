#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    // exercise 1
    int number[3];
    for(int i=0; i<2; i++){
        cout<<"Enter a number: ";
        cin>>number[i];
    }
    int third_value = add(number[0], number[1]);
    number[2] = third_value;
    cout<<"The third value is: "<<number[2]<<endl;
    
    return 0;
}