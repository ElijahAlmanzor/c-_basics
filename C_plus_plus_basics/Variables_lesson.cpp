#include <iostream>
#include <string> 
//requires a #include declaration


//Some words cannot be used as name of variables
//Unlike python, data types of variables have to be defined

/* There is:
Character types which can represent a single character
NUmerical integer type - whole numbers
Floating-point types - can be 3.14 or 0.01
Boolean Type - true or false 
*/

//The sizes for these are machine specific - no standard
//Everything must be decalred before use
//Tells compiler how much memeory to reserve and how to interpret value

using namespace std;

int main()
{
    // declaring variables
    int a = 1, b = 2;
    int result;
    result = a + b;
    cout << result << "\n";

    //type deduction
    auto c =a; 
    cout << a;


    //strings in c++
    //strings are compounds of chars
    string mystring;
    mystring = "This is a string";
    cout << mystring << endl;
    return 0;

}