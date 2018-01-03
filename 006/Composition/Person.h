#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "Birthday.h"


class Person
{
    public:
        Person(string n, Birthday b)
        : name(n), bd(b) {
        }
        void printInfo() {
            cout << name << endl;
            bd.printDate();
        }

    protected:

    private:
        string name;
        Birthday bd;
};

#endif // PERSON_H
