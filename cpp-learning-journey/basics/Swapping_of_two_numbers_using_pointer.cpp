#include <iostream>
using namespace std;

void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";

    swapWithPointers(&x, &y);

    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";

    return 0;
}
