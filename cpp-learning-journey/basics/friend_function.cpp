#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number() {
        num = 100;
    }

    friend void display(Number n);
};

void display(Number n) {
    cout << "Number = " << n.num;
}

int main() {
    Number obj;
    display(obj);

    return 0;
}
