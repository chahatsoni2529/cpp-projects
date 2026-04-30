#include <iostream>
using namespace std;

// Non-parametric functions for all operations
double add() {
    double a, b;
    cout << "Enter two numbers for addition: ";
    cin >> a >> b;
    return a + b;
}

double sub() {
    double a, b;
    cout << "Enter two numbers for subtraction: ";
    cin >> a >> b;
    return a - b;
}

double mul() {
    double a, b;
    cout << "Enter two numbers for multiplication: ";
    cin >> a >> b;
    return a * b;
}

double divi() {
    double a, b;
    cout << "Enter two numbers for division: ";
    cin >> a >> b;
    if (b != 0)
        return a / b;
    else {
        cout << "Cannot divide by zero!\n";
        return 0;
    }
}

int main() {
    cout << "Simple Calculator (All operations)\n";

    cout << "Addition Result: " << add() << endl;
    cout << "Subtraction Result: " << sub() << endl;
    cout << "Multiplication Result: " << mul() << endl;
    cout << "Division Result: " << divi() << endl;

    return 0;
}
