#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b){
    cout << "Constructor" << endl;
    cout << regVar << endl;
    cout << constVar << endl;
}

void MyClass::myPrint() const{
  cout <<"Hello"<<endl;
}

/*MyClass::~MyClass(){
    cout << "Destructor" << endl;
}*/
