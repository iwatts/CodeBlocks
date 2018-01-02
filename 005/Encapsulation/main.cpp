#include <iostream>
#include <string>

using namespace std;

class myClass {
    public:
        myClass(string nm) {
            setName(nm);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    myClass myObj("Isaac");
    cout << myObj.getName();

    return 0;
}

