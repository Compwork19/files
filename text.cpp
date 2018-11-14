#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream out{abc.txt};
   if(out)
   {
	   out<<a<<" ";
	   out<<b<<" ";
	   out<<c;
	   
	   out.close();
   }
   else
    cout<<"Error: Could not open abc.txt"<<endl;
   
   
   
   
   
   //display data to console (i.e. as formatted chars)
   //cout<<a<<" "<<b<<" "<<c;

   //cout<<endl<<endl;
 
   return 0;
}
