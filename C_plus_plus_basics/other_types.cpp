#include <iostream>
using namespace std;

//TYPE ALIASES
/* A different name by which a type can be identified. Any valid type can be aliased so that it can be reffered to by a different identifier

In C++ the syntax is typedef existing_type new_type_name

typedef char C

therefore:
C mychar; anotherchar, *ptc1
*/


/* Union allow one portion of memory to be accessed as different data types
for example:

union type_name {
    member_type1 member_name1;
    member_type2 member_name2;
    member_type3 member_name3;

} object_names;
//Very similar to structs however all the members use the same memory block
*/

//enumerators are arrays which indices can be accessed by an identifier
int main()
{
    enum colors_t {black, blue, green, cyan, red, purple, yellow, white};
    //values of enums are implicitly convertible to an integer type. 
    //when no specified the first value is always 0
    cout << colors_t{cyan} << endl;
}