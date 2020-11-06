#include <iostream>
using namespace std;




/* similar to structures except they can also contain functions as members
Objects (OOP) is when something is made from a class! 
//they can optionally have access specifiers which can be private, public or protected

private members are only accessible from within other members of the same class
protected members are 

public members are accessible from anywhere the object is visible
*/

//private is the default access level
class Rectangle 
{
    int width, height;
    //by default these are private - which can only be accessed by other members
    public:
        Rectangle (int, int); //must initialise the function with a prototype
        Rectangle(); //can also have a default constructors
        void set_values(int, int);
        int area () {return width*height;}

}; //classes always end with a semi-colon   

void Rectangle::set_values (int x, int y)
{
    width = x;
    height = y;
}

//Can also have constructors such that the object created can be initialised with some values
Rectangle::Rectangle (int a, int b)
{
    width = a;
    height = b;
}

Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

int main() 
{
    Rectangle recta, rectb;
    recta.set_values(3,4);
    rectb.set_values(5,6);
    Rectangle rectc(7,8); //constructors executed once when a new object of that class is created
    Rectangle rectd; //without the parenthesis as that would be a function decleration
    cout << "recta area: " << recta.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    cout << "rectc area: " << rectc.area() << endl;
    cout << "rectd area: " << rectd.area() << endl;

}