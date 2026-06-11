#include <iostream>
using namespace std;

class Teacher   // base class
{
private:
    string name;

public:
    void read()
    {
        cout << "he study C++ with oops regularly" << endl;
    }
};

class student : public Teacher   // derived class
{
public:
    // void read()
    void sport()
    {
        cout << "he play the cricket and vollyball" << endl;
    }
};

int main()
{
    student s;

    s.read();   // inherited from Teacher
    s.sport();  // own function

    return 0;
}
