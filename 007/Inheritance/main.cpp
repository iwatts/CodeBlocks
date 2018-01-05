#include <iostream>

using namespace std;

class Mother
{
     public:
        Mother() {
            cout <<"Mother ctor"<<endl;
        };
        void sayHi() {
            cout << "Hi\n";
            //cout << var;
        }
        ~Mother() {
            cout <<"Mother dtor"<<endl;
        }

     private:
        int var=0;

     protected:
        int someVar;
};

class Daughter : public Mother
{
    public:
        Daughter() {
            cout <<"Daughter ctor"<<endl;
        };
        ~Daughter() {
            cout <<"Daughter dtor"<<endl;
        }
};

int main()
{
    Daughter d;
    d.sayHi();
    //Mother m;
    return 0;
}
