#include <iostream>
using namespace std;

int operate (int a, int b) {
    return (a*b);
}

double operate (double a, double b) {
    return (a/b);
}

template <class SomeType>
SomeType sum (SomeType a, SomeType b) {
    return a+b;
}

template <class T, class U>
bool are_equal (T a, U b) {
    return (a==b);
}

template <class T, int N>
T fixed_multiply (T val) {
    return val * N;
}

int main () {
    int x=5,y=2;
    double n=5.0,m=2.0;
    cout << operate (x,y) << '\n';
    cout << operate (n,m) << '\n';

    int i=5, j=6, k;
    double f=12.05, g=0.5, h;
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    cout << k << '\n';
    cout << h << '\n';

    if (are_equal(10,10.0)) {
        cout << "x and y are equal\n";
    } else {
        cout << "x and y are not equal\n";
    }

    cout << fixed_multiply<int,2>(10) << '\n';
    return 0;
}
