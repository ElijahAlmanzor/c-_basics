#include <iostream>
#include <string>



/* Some notes:
C++ programs do not decide where variables/arrays or structures are stored in memory
Operating Systems are responsbile for memory locations on runtime
*/
//myvar = 25 @at address 1776
//Address of a variable can be obtained by preceding the name of a variable with an ampersand sing (&)
//e.g. foo = &myvar --> foo = 1776


//Dereference operator
//Pointers can be used to access the variable they point to directly
//baz = foo* means copy the value at the address 1776 to baz

//therefore foo refers to 1776, whilst *foo refers to the value 25
//pointers are declared as type * name
//type is the type of data the pointer points to

int main()
{
    int firstvalue, secondvalue;
    int * mypointer;
    mypointer = &firstvalue;
    *mypointer = 10; //now stores ten in firstvalue
    mypointer = &secondvalue;
    *mypointer = 20; //now stores 20 in secondvalue
    std::cout << firstvalue << endl;
    std::cout << secondvalue << endl;


    //Some examples that mixes arrays and pointers
    int numbers[5];
    int * p;
    p = numbers; //now the pointer p points to the first address of numbers
    *p = 10; //puts a value in the first index of the array
    p++; *p = 20; //puts a vlalue in the seonc index
    p = &numbers[2]; *p = 30;
    p = numbers + 3; *p = 40;
    p = numbers; *(p+4) = 50;
    for (int n = 0; n < 5; n++)
    {
        std::cout << numbers[n] << endl;
    }

    return 0;
}