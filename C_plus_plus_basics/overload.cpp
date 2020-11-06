//overloading functions
#include <iostream>
#include <string>
using namespace std;


//Two different functions can have the same name
//If their parameters are different or if they are a different type
//functions with same names tend to have the same functionality
//for etiqueetes
int operate(int ,int);
double operate(double, double);

template <class SomeType>
SomeType sum (SomeType a, SomeType b)
{
    SomeType result;
    result = a + b;
    return result;
}

int main()
{
    int x=5, y=2;
    double n = 5.0, m = 2.0;
    cout << operate(x,y) << '\n';
    cout << operate(n,m) << '\n';


    float res = sum<float>(1.0,3.2);
    int intres = sum<int>(1,3);
    cout << res << " " << intres << endl;
    return 0;
}

int operate (int a, int b)
{
    return (a+b);
}

double operate (double a, double b)
{
    return (a+b);
}