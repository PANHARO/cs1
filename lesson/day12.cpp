#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int id;
        int age;
};
int main(){
    Student student1;
    student1.name = "Panharo";
    student1.id = 1;
    student1.age = 20;
    cout << "Student 1 info: "<<student1.name<<" "<<student1.id<<" "<<student1.age<<endl;
    Student student2;
    student2.name = "John";
    student2.id = 2;
    student2.age = 21;
    cout << "Student 2 info: "<<student2.name<<" "<<student2.id<<" "<<student2.age<<endl;

    return 0;
}