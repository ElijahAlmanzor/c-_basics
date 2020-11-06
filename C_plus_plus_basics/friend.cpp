//friend functions
#include <iostream>
using namespace std;


class Rectangle
{
    int width, height;
    public:
        Rectangle() {} //This is a default constructor 
        Rectangle (int x, int y):width(x), height(y) {} //A normal constructor
        int area() {return width * height;} // Returns the area
        friend Rectangle duplicate (const Rectangle&); //A function that has access to private and protected members of a class
        void convert (Square a);


};

Rectangle duplicate (const Rectangle& param)
{
    Rectangle res; //just so it can be accessed
    res.width = param.width*2;
    res.height = param.height*2;
    return res;
}
//Similar to friend functions, a friend class is a class whose members have access to the private or protected members of another class
class Square 
{
    friend class Rectangle; //this gives rectangle access to the class square
    private:
        int side;
    public:
        Square (int a) : side(a) {}

};

void Rectangle::convert (Square a)
{
    width = a.side;
    height = a.side;
}


int main()
{
    Rectangle foo; //Initialise a rectangle object
    Rectangle bar(2,3);
    foo = duplicate (bar); //essentially this takes bars values, modifies it and then gives it to the rectangle foo
    cout << foo.area() << endl;

    Rectangle rect;
    Square sqr(4);
    rect.convert(sqr); //Rectangle has access to squares member variables
    cout << rect.area() << endl;

    return 0;
}