#include <iostream>
#include <fstream>
 using namespace std;
 int main()
{
   ofstream file; //object of fstream class
    
   //opening file "sample.txt" in out(write) mode
   file.open("sample.txt");
    
   if(!file)
   {
       cout<<"Error in creating file!!!";
       return 0;
   }
cout<<"File created successfully.";
 //closing the file
   file.close();
    
   return 0;
}

