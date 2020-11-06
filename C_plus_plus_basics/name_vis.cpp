#include <iostream>
#include <string>
using namespace std; //this is genuinely avoided as best to explicitly show everything

//where the varaibles are declared determine their type
//A variable declared out here is a global scope although want to avoid

int some_functon()
{
    int bar; //here it is a local variable
    bar = 0;
}
//local variables are actually within braces or blocks


//namespaces allows for grouping of named entities that otherwise
//would have global scope into narrower scope giving them
//namespace scope - basically some sort of identifier!
namespace foo
{
    int value() {return 5;}
    int a = 100;
} //very useful to avoid name collisions
//they can even be split up
//unintialized global variables are equalled to zero
namespace foo { int b = 10;}

int main() 
{
    int x = 10; //ok, inner scope
    int y = 20;
    using namespace foo;
    {
        int x; //now this has local inner scope
        x = 50; //sets value to inner x
        y = 50; //sets value of outer y to 50

    }
    cout << foo::value() << '\n';
    cout << foo::a << '\n';
    cout << b << endl;
    return 0;
}

