#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inFile("laptop.txt");
    if(!inFile){
        cout << "Could not open laptop.txt for reading" << endl;
        return 1;
    }
    // read and display the laptop price
    string laptopName;
    int laptopPrice;
    char seperator;
    inFile >> laptopName >> seperator >> laptopPrice;
    cout << "Laptop Name: " << laptopName << " Laptop Price: " << laptopPrice << endl;
    inFile.close();
    ifstream inFile2("phone.txt");
    if(!inFile2){
        cout << "Could not open phone.txt for reading" << endl;
        return 1;
    }
    // read and display the phone price
    string phoneName;
    int phonePrice;
    inFile2 >> phoneName >> seperator >> phonePrice;
    cout << "Phone Name: " << phoneName << " Phone Price: " << phonePrice << endl;
    inFile2.close();
    cout<<"Total price: "<<laptopPrice+phonePrice<<endl;
    return 0;
}