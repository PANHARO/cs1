#include<iostream>
using namespace std;

int main(){
    // // exercise 1
    //     string student[5];
    //     for(int i=0;i<5;i++){
    //             cout<<"Enter student name: ";
    //             cin>>student[i];
               
    //     }
    //     //display all name
    //     for(int i=0;i<5;i++){
    //             cout<<student[i]<<endl;
    //     }
    // // exercise 2 
    //     int number[6];
    //     for(int i=0; i<6; i++){
    //         cout<<"Enter a number: ";
    //         cin>>number[i];
    //     }
    //     for(int i=0; i<6; i++){
    //         if(i%2==0){
    //             cout<<number[i]<<endl;
    //         }
    //     }
    // // exercise 3
    char grade[4] = {'A','B','C','D'};
    for(int i=0; i<4; i++){
        cout<<grade[i]<<endl;
    }
    grade[2] = 'A';
    for(int i=0; i<4; i++){
        cout<<grade[i]<<endl;
    }
    // int student_marks[5] = {90, 80, 70, 60, 50};
    // cout<<"Student mark before update: "<<endl;
    // for(int i=0; i<5; i++){
    //     cout<<student_marks[i]<<endl;
    // }
    // for(int i=0; i<5; i++){
    //     student_marks[i] += 5;
    // }
    // cout<<"Student mark after update: "<<endl;
    // for(int i=0; i<5; i++){
    //     cout<<student_marks[i]<<endl;
    // }
    return 0;
}