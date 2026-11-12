#include<iostream>
#include<vector>
using namespace std;

int main(){
    // // bubble sort 1
    // int number[4] ={4,7,9,2};
    // cout<<"Before sorting: ";
    // for (int i=0; i<4; i++){
    //     cout<<number[i]<<" ";
    // }
    // cout<<endl;
    // for (int i=0; i<4; i++){
    //     for (int j=0; j<4-i-1; j++){
    //         if (number[j]>number[j+1]){
    //             int temp = number[j];
    //             number[j] = number[j+1];
    //             number[j+1] = temp;
    //         }
    //     }
    // }
    // cout<<"After sorting: ";
    // for (int i=0; i<4; i++){
    //     cout<<number[i]<<" ";
    // }
    // cout<<endl;
    // // replace char
    // char pet[] = "cat";
    // pet[0] = 'b';
    // cout<<"After replacing: "<<pet<<endl;
    // cout<<"The length of the string is: "<<sizeof(pet)-1<<endl;
    // how many time the letter 'a' appears in the string
    // int count = 0;
    // char fruit[] = "banana";
    // for (int i=0; fruit[i] != '\0'; i++){
    //     if (fruit[i] == 'a'){
    //         count++;
    //     }
       
    // }
    // cout<<"The letter 'a' appears "<<count<<" times in the string."<<endl;
    int score[5];
    for(int i=0; i<5; i++){
        cout<<"Enter student score "<<i+1<<": ";
        cin>>score[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Student "<<i+1<<" score is: "<<score[i]<<endl;
    }
    return 0;
}