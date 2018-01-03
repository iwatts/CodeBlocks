#include <iostream>

#include "Birthday.h"
#include "Person.h"

using namespace std;

int main() {
    Birthday bd(1, 5, 1988);
    Person p("Isaac", bd);
    p.printInfo();
}
