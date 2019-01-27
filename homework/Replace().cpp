#include <iostream>
#include <string>

int main () {
   std::string str="this is a test string.";
   std::string str2=" stupid";

   std::cout << str << '\n';
   str.replace(9,5,str2);
   std::cout << str << '\n';
   return 0;
}