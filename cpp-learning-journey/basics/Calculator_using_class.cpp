#include <iostream>
using namespace std;
class calculator //class name
{
    //data membecoutr  (private)
    private: //access specifer
    int a;
    int b;
    int c;
    //member functions(public)
    public:
    int add()
    {
        cout<<"enter the element a and b";
        cin>>a>>b;
        c=a+b;
        cout<<"addition is "<<c<<endl;

    }
    int sub()
    {
        cout<<"enter the element a and b";
        cin>>a>>b;
        c=a-b;
        cout<<"sub is "<<c;
    }

};

int main()
{
    calculator c; //created object of calculator class
    c.add();
    c.sub();
    return 0;
}
