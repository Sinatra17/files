#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream ABCFile;
   ABCFile.open("abc.txt");
   ABCFile << "\t\t\t"<<a<<", "<<b<<", "<<c << "\n";//display data to console (i.e. as formatted chars)
   ABCFile.close();
 
   return 0;
}
