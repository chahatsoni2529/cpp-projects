#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swapped values are: a = " << a << " b = " << b << endl;

    return 0;
}
