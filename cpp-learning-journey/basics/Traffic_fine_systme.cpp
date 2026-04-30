#include <iostream>
using namespace std;
int main(){
    int helmet, license, fine = 0;
    cin>>helmet>>license;
    if (helmet==0)
        fine+=1000;
    if (license==0)
        fine+=2000;
        
        cout << "Total fine =" << fine;

        return  0;
    
}
