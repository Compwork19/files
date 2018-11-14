#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream out{"abc.bin",ios::binary};
   if(out)
   {
	   out.write(reinterpret_cast(char*>(&a),sizeof(a));
	   out.write(reinterpret_cast(char*>(&b),sizeof(b));
	   out.write(reinterpret_cast(char*>(&c),sizeof(c));
	   
	   out.close();
   }
   else
    cout<<"Error: Could not open abc.txt"<<endl;
   
   return 0;
   
}//end main
