#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream infile("students.txt");
    if(!infile){
        cout << "Could not open students.txt" << endl;
        return 1;
    }
    string name1,name2,name3;
    int mark1,mark2,mark3;
    char seperator;
    // Read all three students from the file
    infile>>name1>>seperator>>mark1;
    infile>>name2>>seperator>>mark2;
    infile>>name3>>seperator>>mark3;
    if (infile.fail()) {
        cout << "Error reading from students.txt" << endl;
        return 1;
    }
    infile.close();

    //Display all three students
    cout<<"Name: "<<name1<<" Mark: "<<mark1<<endl;
    cout<<"Name: "<<name2<<" Mark: "<<mark2<<endl;
    cout<<"Name: "<<name3<<" Mark: "<<mark3<<endl;
    
    return 0;
}