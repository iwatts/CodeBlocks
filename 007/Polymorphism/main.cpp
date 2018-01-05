#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = 1 + (rand() % a);
        }
        virtual void attack(int damage) {
            setAttackPower(damage);
            cout << "Enemy attacks! - " << attackPower << " damage!" << endl;
        }
};

class Ninja: public Enemy {
    public:
        void attack(int damage) {
            setAttackPower(damage);
            cout << "Ninja attacks! - " << attackPower << " damage!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack(int damage) {
            setAttackPower(damage);
            cout << "Monster attacks! - " << attackPower << " damage!" << endl;
        }
};

int main() {
    srand(time(0));

    Ninja n;
    Monster m;
    Enemy e;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;

    e1->attack(4);
    e2->attack(16);
    e3->attack(20);

}
