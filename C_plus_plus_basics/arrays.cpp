//a collection of ints - basically a computerised matrix
#include <iostream>
#include <string>

using namespace std;

//they are accessed by indexing
int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

//arays as parameters
//can't actually pass the array, must pass in its address
void printarray (int arg[], int length)
{
    for (int n=0; n<length; n++)
    {
        cout << arg[n] << " " << endl;
    }
}


int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n];
  }
  cout << result << endl;
 int secondarray[5] = {2, 4, 6, 8, 10};

 printarray(secondarray, 5);

  return 0;
}