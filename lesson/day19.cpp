#include<iostream>
using namespace std;

int main(){
    // count positive, negative and zero numbers
    // int number[6] = {3,-2,7,0,5,-4};
    // int count_positive = 0;
    // int count_negative = 0;
    // int count_zero = 0;
    // for(int i=0; i<6; i++){
    //     if (number[i] < 0){
    //         count_negative++;
    //     }
    //     else if (number[i] > 0){
    //         count_positive++;
    //     }
    //     else{
    //         count_zero++;
    //     }
    // }
    // cout<<"Count of positive numbers: "<<count_positive<<endl;
    // cout<<"Count of negative numbers: "<<count_negative<<endl;
    // cout<<"Count of zero numbers: "<<count_zero<<endl;

    //count a value is followed by a larger number
    // int number1[5] = {3,8,2,6,1};
    // int count = 0;
    // for (int i=0; i<4; i++){
    //         if (number1[i]<number1[i+1]){
    //             count++;
    //         }
    // }
    // cout<<"A count of value that followed by a larger value is: "<<count<<endl;

    // // change every value less than 4 to 0
    // int number2[7] ={3,6,4,2,5,9,1};
    // // original array
    // for (int i=0; i<7; i++){
    //     cout<<number2[i]<<" ";
    // }
    // cout<<endl;
    // for (int i=0; i<7; i++){
    //     if (number2[i] < 4){
    //         number2[i] = 0;
    //     }
    // }
    // // modified array
    // for (int i=0; i<7; i++){
    //     cout<<number2[i]<<" ";
    // }
    // cout<<endl;

    // display sorted or not sorted
    // int number3[7] ={4,0,1,3,2,9,5};
    // bool sorted = true;
    // for (int i=0; i<6; i++){
    //     if(number3[i] > number3[i+1]){
    //         sorted = false;
    //         break;
    //     }
    // }
    // if(sorted){
    //     cout<<"Sorted";
    // }
    // else{
    //     cout<<"Not sorted";
    // }

    // sort the given array
    int number4[6] ={6,1,3,0,9,8};
    for (int i=0; i<6; i++){
        for (int j=i+1; j<6; j++){
            if(number4[i] > number4[j]){
                int temp = number4[i];
                number4[i] = number4[j];
                number4[j] = temp;
            }
        }
    }
    //display the sorted array
    for (int i=0; i<6; i++){
        cout<<number4[i]<<" ";
    }
    return 0;
}