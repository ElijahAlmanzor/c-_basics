/* One key feature of class inheritance is that a pointer do a derived class is type-compatible with a pointer to its base class.
Polymorphism is the art of taking advantage of this simple but powerful and versatile feature.
*/
#include <iostream>
using namespace std;


class Polygon
{
    protected:
        int width, height;
    public:
        void set_values (int a, int b)
        {
            width = a;
            height = b;
        }
};

class Rectangle: public Polygon
{
    public:
        int area()
        {
            return width*height;
        }
};

int main()
{
    Rectangle rect;
    Polygon * ppoly1 = &rect;//remember classes, strcuts etc. are just new types in C++!  
    //because its a pointer to polygon, can only access derived members from polgygon  
    ppoly1->set_values(4,5); //for classes and structs, the dereferencing operator is ->
    cout << rect.area() << endl; //hence why had to use rect,area()
}