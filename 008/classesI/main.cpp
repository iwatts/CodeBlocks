#include <iostream>
#include "rectangle_tutorial.h"

using namespace std;

int main()
{
    rectangle_tutorial rect, rectb, rectc;
    rect.set_values (3,4);
    rectb.set_values (5,6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    cout << "rectc area: " << rectc.area() << endl;
    return 0;
}
