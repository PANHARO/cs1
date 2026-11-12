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
    // int number1[6]={10,15,50,10,100,35};
    // // before sorting
    // for (int i=0; i<6; i++){
    //     cout<<number1[i]<<" ";
    // }
    // cout<<endl;
    // // find the lowest and highest number
    // int lowest = number1[0];
    // int highest = number1[0];
    // for(int i=0; i<6; i++){
    //     if(number1[i]<lowest){
    //         lowest=number1[i];
    //     }
    //     if(number1[i]>highest){
    //         highest=number1[i];
    //     }
    // }
    // cout<<"the lowest number is: "<<lowest<<endl;
    // cout<<"the highest number is: "<<highest<<endl;
    // // exercise 3
    // double product[5];
    // cout<<"Enter 5 product prices: ";
    // for(int i=0; i<5; i++){
    //     cin>>product[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout<<"Product "<<i+1<<" price is: "<<product[i]<<endl;
    // }
    // double total=0;
    // double average=0;
    // for(int i=0; i<5; i++){
    //     total+=product[i];
    // }
    // average=total/5;
    // cout<<"Total price is: "<<total<<endl;
    // cout<<"Average price is: "<<average<<endl;
    // // count how many price above 100
    // int count=0;
    // for(int i=0; i<5; i++){
    //     if(product[i]>100){
    //         count++;
    //     }
    // }
    // cout<<"Number of products above 100: "<<count<<endl;
    // exericse 4
    // bubble sort
    int num[4] = {7,4,9,2};
    for(int i=0; i<3; i++){
    for(int j=0; j<4-i-1; j++){
        if(num[j] > num[j+1]){
            int temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
    }

    cout << "After pass " << i+1 << ": ";
        for(int k=0; k<4; k++){
            cout << num[k] << " ";
        }
    cout << endl;
}
// 
    return 0;
}