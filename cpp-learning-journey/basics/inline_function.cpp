#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int main() {
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Square = " << square(num);

    return 0;
}
