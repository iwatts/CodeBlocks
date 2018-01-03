#include <iostream>

#include <string>
#include "Birthday.h"
#include "Person.h"

using namespace std;

Person::Person()
{
    //ctor
    void printInfo() {
        cout << name << endl;
        bd.printDate();
    }
}
