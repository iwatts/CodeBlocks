#ifndef RECTANGLE_TUTORIAL_H
#define RECTANGLE_TUTORIAL_H


class rectangle_tutorial
{
    public:
        int width, height;
        int area () {return width*height;}
        rectangle_tutorial();
        set_values (int,int);
        //virtual ~rectangle_tutorial();

    protected:

    private:
};

#endif // RECTANGLE_TUTORIAL_H
