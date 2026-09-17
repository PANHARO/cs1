#include <iostream>
using namespace std;

int main()
{
    // first exercise
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // second exercise
    // for (int i = 1; i < 6; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // third exercise
    // for(int i=0; i<5; i++){
    //     for(int j =5; j>i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //fourth exercise
    for(int i=0; i<5; i++){
        for(int j=0; j<4-i; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}   