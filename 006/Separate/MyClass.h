#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass
{
    public:
        MyClass(int a, int b);
        void myPrint() const;
        //~MyClass();

    protected:

    private:
        int regVar;
        const int constVar;
};

#endif // MYCLASS_H
