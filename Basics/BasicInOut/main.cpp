#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string myStr;
  cout << "What's your name? ";
  getline (cin, myStr);
  cout << "Hello " << myStr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, myStr);
  cout << "I like " << myStr << " too!\n";

  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}
