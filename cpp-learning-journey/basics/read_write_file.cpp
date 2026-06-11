#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("sample.txt");

    fout << "Welcome to File Handling";
    fout.close();

    ifstream fin("sample.txt");

    string text;
    getline(fin, text);

    cout << text;

    fin.close();

    return 0;
}
