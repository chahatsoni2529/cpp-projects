#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;

    int sum = *p1 + *p2;  //deferencing pointers

    cout << "Sum = "<< sum;
    return 0;
}
