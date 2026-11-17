#include<iostream>
using namespace std;
    void countdown(int n){
            cout<<n<<endl;
            if(n==0){
                return;
            }
            countdown(n-1);
        }
    void countup(int n){
        if (n == 0) {
        cout << 0 << endl;
        return;
        }
        countup(n - 1);
        cout << n << endl;
    }

    void countup_even(int n){
        if (n==0){
            cout<<0<<endl;
            return;
        }
        countup_even(n-1);
        if(n%2==0){
            cout<<n<<endl;
        }
    }
    int countup_sum(int n){
        if(n==1){
            return 1;
        }
        return n + countup_sum(n-1);
    }

int main(){
    // countdown(5);
    // countup(5);
    // countup_even(5);
    cout << countup_sum(5) << endl;
    return 0;
}