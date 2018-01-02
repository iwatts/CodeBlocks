#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Birthday.h"


class Person
{
    public:
        Person(string n, Birthday b)
        : name(n),
        bd(b){
        }

    protected:

    private:
        string name;
        Birthday bd;
};

#endif // PERSON_H
