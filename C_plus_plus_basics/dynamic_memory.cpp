//rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main()
{
    int i, n;
    int * p;
    cout << "How many numbers would you like to type?";
    cin >> i;
    p = new(nothrow) int[i]; //best to dynamically allocate memory if unknown memory is needed
    if (p == nullptr)
        cout << "Error: memory could not be allocated"; // best to always a throw an error just in case
    else
    {
        for (n = 0; n < i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n=0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p; //must delete the allocated pointer to free the memory again
    }
    
}