#include <iostream>

using namespace std;

template <class T>
T sum(T a, T b) {
    return a+b;
}


template <class F, class S>
F smaller(F a, S b) {
   return (a < b ? a : b);
}

int main () {
    int x=7, y=15;
    cout << sum(x, y) << endl;

    double x2=72, y2=15.54;
    cout << smaller(x2, y2) << endl;
}
