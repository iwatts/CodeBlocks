#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;
    ofstream MyFile1("test.txt");

    if (MyFile1.is_open()) {
        MyFile1 << "This is awesome! \n";
    }
    else {
        cout << "Something went wrong";
    }
    MyFile1.close();

    ifstream MyFile("test.txt");
    while ( getline (MyFile, line) ) {
        cout << line << '\n';
    }
    MyFile.close();
}
