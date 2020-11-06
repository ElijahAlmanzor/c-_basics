#include <iostream>
using namespace std;

/* Classes can be extended, creating new classes which retain the characterisitcs of the base class
Inheritance involves a base class and a derived class - derived class inherits members of the base class
on top of which it can add to its own members

e.g. if defined a class called Polygon, can then derive two other ones Rectangle and Triangle
it uses the syntax 
class derived_class_name: public base_class_name
*/

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
{ //public here denotes that all the inherited members will be the same e.g. if protected they are protected
    //if protected, all public members of the base class are inherited as protected in the derived class.
    public:
        int area()
        {
            return width * height;
        }
};

class Triangle: public Polygon
{
    public:
        int area()
        {
            return width * height / 2;
        }

}; //These derived classes have access to the Polygon class

class Mother {
  public:
    Mother ()
      { cout << "Mother: no parameters\n"; }
    Mother (int a)
      { cout << "Mother: int parameter\n"; }
};


class Daughter : public Mother {
  public:
    Daughter (int a)
      { cout << "Daughter: int parameter\n\n"; }
};
class Son : public Mother {
  public:
    Son (int a) : Mother (a)
      { cout << "Son: int parameter\n\n"; }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    rect.set_values(4,5);
    tri.set_values(4,5); // They've inherited Polygons member variables and functions
    cout << rect.area() << '\n';
    cout << tri.area() << '\n';

    
    Daughter kelly(0);
    Son bud(0);
    return 0;
}
//Private can only be accessed by members of the same class
//Protected members on the other hand can be accessed by derived classes!
//Public is accessible everywhere!

/* Some more general notes

A publily derived class inherits access to every member execept for:
> Its constructors and destructors
> Its assignment operator members
> Its friends
> Its private members

Even though constructors and destructors are not inherited as such, they are automatically called by 
the constructors and destructor od the derived class

Unless specified constructors of the derived class calls the constructor of its base classes
*/