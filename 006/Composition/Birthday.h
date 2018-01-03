#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>
#include <string>

class Birthday
{
    public:
        Birthday(int m, int d, int y)
        : month(m), day(d), year(y){
        }
        void printDate() {
            cout << month << "/" << day << "/" << year << endl;
        }

    protected:

    private:
        int month;
        int day;
        int year;
};

#endif // BIRTHDAY_H
