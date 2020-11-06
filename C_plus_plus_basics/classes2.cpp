//Classes are essentially used to define new types
//these classes can then be modified using operations such as c = a + b;
#include <iostream>
#include <string>
using namespace std;

class Example
{
    public:
        int total;
        void accumulate (int x) {total += x; }
};
//This class when initialised has a default constructor 

//But when a constructor is defined, a default constructor must also be defined
class Example3
{
    string data;

    public:
        Example3 (const string& str) : data(str) {} //now that a constructor has been defined
        Example3() {} //A default constructor must also be defined in order to use it
        const string& content() const {return data;}
};

int main() 
{
    Example ex1;
    Example3 foo;
    Example3 bar ("Example");

    cout << "bar's content: " << bar.content() << endl;

    return 0;
}