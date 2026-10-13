#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("students.txt");
    if(!outfile){
        cout << "Could not open students.txt for writing" << endl;
        return 1;
    }
    // Write three students to the file
    outfile<<"Panharo,90"<<endl;
    outfile<<"Bob,85"<<endl;
    outfile<<"Charlie,92"<<endl;
    outfile.close();
    // Read the three students
    
    
    return 0;
}