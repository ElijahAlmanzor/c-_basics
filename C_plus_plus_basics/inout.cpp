//Basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Have already been using objects of class istream -- cin
//as well as cout object of class ostream

/*
int main()
{
    ofstream myfile;
    myfile.open ("example.txt")
    myfile << "This is an example text written to the file.\n";
    myfile.close()
    return 0;
}
*/

int main()
{
    /*
    ofstream myfile ("example.txt");

    if (myfile.is_open())
    {
        myfile << "This is the first line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
*/
    //else cout << "Unable to open file";
    
    string line;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while (getline (myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    
    return 0;
}
