#include <iostream>
#include <string>
using namespace std;

const int pi = 3.14159;
/* Like variables in C++, the function must be defined to have a type
a name
the parameters and its statements
*/


//In C++ main is always the first function to be called
//if the function doesn't need to return a value
//its just a void type


void printmessage(void)
{
    //These are for functions that don't return shit
    cout <<"Uselesss function that does fuckall";
}

void pointer_example(int& a, int&b, int& c)
{ 
    
    a*=2;
    b*=2;
    c*=2;

    //now these will actually tkae in the variables 
    //which can be modified within the function
    
}
//Passing things as references is probably more efficient
//especially when dealing with arrays or character compounds
//but to avoid actually messing around with the values
//can make them as constants

string concatenate(const string&a,const string&b)
{
    return a+b;
}

float work_area_circle(float r);
//prototyping such that the function can be called before main

int main()
{
    float r = 3.0;
    float area = work_area_circle(r);
    cout << "The area is " << area << endl;
    printmessage();
    //
    string string1 = "My name is";
    string string2 = " Elijah";
    string string3 = concatenate(string1, string2);
    cout << string3 << endl;
    cout << work_area_circle(1) << endl;
    return 0;

}


float work_area_circle(float r = 1.0)
{
    //when passing values into functions
    //only the values are copied into the local variables of 
    //this function
    float area = pi*r*r;
    return area;

}