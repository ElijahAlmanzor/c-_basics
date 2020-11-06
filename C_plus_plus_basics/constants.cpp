#include <iostream>
#include <string>

//sometimes it is just convenient to give name to a constant value
const double pi = 3.14159;
const char tab= '\t';

#deifine PI 3.14159
//these do blind replacements without any error checking
//so not really recommended

int main()
{
    double r = 5.0;
    double area;

    area = pi*r*r;
    cout << area << endl;

    //Increments and Decrememnts
    int x, y;
    //++x or x++ matter depending on if the after value is used
    x = 3;
    y = ++x;
    //here x contains 4 (x is incremented then y takes its value)

    //whereas 
    x = 3;
    y = x++;
    //y is 4, but x stays at 3




    return 0;


}