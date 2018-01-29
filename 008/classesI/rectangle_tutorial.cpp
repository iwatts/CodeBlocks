#include "rectangle_tutorial.h"
#include <iostream>
using namespace std;

rectangle_tutorial::rectangle_tutorial() {
    //ctor
    width = 5;
    height = 5;
}

rectangle_tutorial::set_values (int x, int y) {
    width = x;
    height = y;
}
