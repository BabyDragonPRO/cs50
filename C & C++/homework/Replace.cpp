#include <iostream>
#include <string>
using namespace std;

int main () {
   std::string str="this is a test string.";
   std::string str2="stupid";
   std::string str3="test";

   std::cout << str << '\n';
   str.replace(str.find(str3),str3.length(),str2);

   std::cout << str << '\n';
   return 0;
}