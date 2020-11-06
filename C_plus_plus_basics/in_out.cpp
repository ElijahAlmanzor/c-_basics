//streams are convenient abstractions to perform input and outputs
//a stream is an entitty a program can either inset or extract characters from

/*
cin is standard input steam
cout is standard output stream */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//<< is the insertion operator

//you never want to do cin >> i as there is no error correction
//use sstream instead

int main()
{
    string mystr; //to accept the string stream input
    float price = 0; 

    cout << "Enter a price" << endl;
    //gets a string input
    getline(cin, mystr);
    //string stream converts it to the correct data type
    stringstream(mystr) >> price;
    


}