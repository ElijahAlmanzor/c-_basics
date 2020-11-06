//multiple inheritance
#include <iostream>
using namespace std;


class Polygon
{
    protected:
        int width, height;
    public:
        Polygon (int a, int b) : width(a), height(b) {}
};

class Output
{
    private:
        static void printa (int i);
    public:
        static void print (int i); //only this can be accessed outside as its public!
};

void Output::print (int i)
{
    //:: is the scope operator - so it says within scope of Ouput
    cout << i << endl;
}


void Output::printa (int i)
{
    //:: is the scope operator - so it says within scope of Ouput
    cout << i << endl;
}

class Rectangle: public Polygon, public Output //See here where rectangle has been derived from two classes
{
    public:
        Rectangle (int a, int b) : Polygon(a,b) {} //Rectangles constructor is the polygon constructors
        int area()
        {
            return width*height;
        }
};

int main()
{
    Rectangle rect(4,5);
    //Apparently, both of these are valid
    rect.print(rect.area());

    //Now to access the print function in the namespace of the class directly
    Rectangle::print (rect.area());

    Output::print (rect.area());
    //Output::printa(rect.area()); This doesn't work as it has been declared private!
}

