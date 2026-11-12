#include<iostream>
using namespace std;

int main(){
    // 2 sum
    int number[6] = {3,-2,7,1,5,-4};
    int target = 3;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(number[i]+number[j] == target){
                cout<<"The two numbers that add up to "<<target<<" are: "<<number[i]<<" and "<<number[j]<<endl;
            }
        }
    }
    // duplicate number
    int number2[6] = {0,1,3,4,5,3};
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6;j++){
            if(number2[i] == number2[j]){
                cout<<"The duplicate number is: "<<number2[i]<<endl;
            }
        }
    }
    // distinct integer
    int number3[6] = {0,1,2,4,5,6};
    int expected_num[7] = {0,1,2,3,4,5,6};
    int sum = 0;
    int sum3 = 0;
    for(int i=0; i<7; i++){
        sum += expected_num[i];
    }
    for(int i=0; i<6; i++){
        sum3 += number3[i];
    }
    cout<<"The missing number is: "<<sum-sum3<<endl;
    // stock price
    int buy_price[5] = {100, 180, 260, 310, 40};
    int sell_price[5] = {110, 210, 280, 300, 50};
    int max_profit = 0;
    for(int i=0; i<5; i++){
        int profit = sell_price[i] - buy_price[i];
        if(profit > max_profit){
            max_profit = profit;
        }
    }
    cout<<"The maximum profit is: "<<max_profit<<endl;
    return 0;
}