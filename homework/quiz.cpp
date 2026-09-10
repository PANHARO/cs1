#include<iostream>
using namespace std;

int main(){
    //first exercise
    cout<<"First exercise"<<endl;
    for(int i=20; i>=1; i--){
        cout<<i<<endl;
    }
    //second exercise
    cout<<"Second exercise"<<endl;
    for(int i=1; i<20;i+=2){
            cout<<i<<endl;
    }
    //third exercise
    cout<<"Third exercise"<<endl;
    int user_input;
    int sum = 0;
    int count = 0;
    while(count<5){
        cout<<"Enter a number: ";
        cin>>user_input;
        sum += user_input;
        count +=1;     
    }
    cout<<"The sum of the five number is: "<<sum<<endl;
    //fourth exercise
    cout<<"Fourth exercise"<<endl;
    int positive_number;
    do{
        cout<<"Enter a positive number: ";
        cin>>positive_number;
        if (positive_number<0 || positive_number==0){
            cout<<"Wrong number! Try again."<<endl;
        }
        else{
            cout<<"Valid number"<<endl;
        }
  
    }while(positive_number<0 || positive_number==0);

    //fifth exercise
    cout<<"Fifth exercise"<<endl;
    int number = 0;
    int positive_number_2 =0;
    int negative_number =0;
    int num_zero = 0;
    int user_input_2;
    while(number<10){
        cout<<"Enter "<<number+1<<" interger: ";
        cin>>user_input_2;
        if (user_input_2>0){
            positive_number_2+=1;
        }
        else if (user_input_2==0){
            num_zero+=1;
        }
        else if (user_input_2<0){
            negative_number+=1;
        }
        number +=1;
    }
    cout<<"Number of positive number is "<<positive_number_2<<endl;
    cout<<"Number of negative number is "<<negative_number<<endl;
    cout<<"Number of Zero is "<<num_zero<<endl;
    return 0;
}