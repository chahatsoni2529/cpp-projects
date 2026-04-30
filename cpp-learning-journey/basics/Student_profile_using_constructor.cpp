#include <iostream>
using namespace std;

class Student{
    string name;
    int age;

public:
    // constructor
    Student(){
        name = "Chahat";
        age = 19;
    }

    // function to display student info
    void display(){
        cout << "========= Student Information =========" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "========================================" << endl;
    }
};

int main(){
    // creating object of Student class
    Student student;
    
    // calling display function to print info
    student.display();
    
    return 0;
}
