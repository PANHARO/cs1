#include <iostream> 
using namespace std; 

void odd_display() { 
    for (int i = 1; i < 20; i+=2){ 
        cout << i << "\n";
    }
    
}

void loop_down(){ 
    for (int i = 20; i >= 1; i--){
        cout << i << "\n";
    }
}

void user_display_num(){ 
    int count = 1; 
    int number = 0;
    int total_num = 0;
    while (count<=5){ 
        cout << "Enter a number ";
        cin >> number;
        total_num += number;
        count +=1;
    }
    cout << total_num;
}

void ask_pos_num(){ 
    int number; 
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0);
}

void int_count(){ 
    int limit = 1; 
    int number; 
    int positive_count = 0; 
    int negative_count = 0; 
    int zero_count = 0;
    while (limit <= 10){
        cout << "Enter an Integer: ";
        cin >> number; 
        if (number > 0){
            positive_count +=1;
        }
        else if (number <0){ 
            negative_count +=1; 
        }
        else if (number ==0){ 
            zero_count +=1; 
        }
        limit +=1;
    }
    cout << "Positive Count " << positive_count << " Negative count " << negative_count << " Zero count " << zero_count;
}
int main() {
    // loop_down();
    // odd_display();
    // user_display_num();
    // ask_pos_num();
    // int_count();
    return 0; 
}
