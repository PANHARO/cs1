#include<iostream>
using namespace std;

int main(){
    // int age;

    // cout<<"Enter your age: ";
    // cin >> age;

    // if (age >=18){
    //     cout<<"You are an adult."<<endl;
    // }
    // int number;

    // cout<<"Enter a number: ";
    // cin>>number;

    // if (number % 2==0){
    //     cout<<number<<" is an even number."<<endl;
    // }
    // else{
    //     cout<<number<<" is an odd number."<<endl;
    // }
   
    // if (score<33 && score >=0){
    //     cout<<"You failed!"<<endl;
    // }
    // else if(score >=33 && score <=100){
    //     cout<<"You passed!"<<endl;
    // }
    // else{
    //     cout<<"Invalid output."
    // }
    double score;
    cout<<"Enter your score: ";
    cin>>score;
    if (score < 0 || score > 100){
        cout<<"Invalid score"<<endl;
    } 
    else if(score >=60){
        cout<<"Grade D"<<endl;
    } 
    else if(score >=70){
        cout<<"Grade C"<<endl;
    }
    else if(score >=80){
        cout<<"Grade B"<<endl;
    }
    else if(score >=90){
        cout<<"Grade A"<<endl;
    } 
    else{
        cout<<"Grade F"<<endl;
    }

    return 0;
}