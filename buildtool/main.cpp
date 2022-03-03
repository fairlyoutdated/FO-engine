#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
/*

NOTE: this is dumb code, but it works for my purpose. 

*/

int main(){
    std::ifstream myfile;
myfile.open("paths.txt");
std::string myfinal;
    std::string myline;
if ( myfile.is_open() ) {
while ( myfile ) { 
std::getline (myfile, myline);
std::cout << myline << '\n';
myfinal = myfinal + " " + myline;
}
}
else {
std::cout << "Couldn't open file\n";
}
std::cout << myfinal;

myfile.close();

std::string temp = "echo " + myfinal + ">paths.txt";

system(temp.c_str());

}