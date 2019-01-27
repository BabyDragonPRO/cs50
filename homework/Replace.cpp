#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

template<typename Container>
bool is_quote(const Container& c, const string& s){
    return search(c.begin(), c.end(), s.begin(), s.end()) != c.end();
}

int main () {
   std::string str="this is a test string.";
   std::string str2="stupid";
   std::string str3="test";

   std::cout << str << '\n';
   str.replace(str.find(str3),str3.length(),str2);

   //str.replace(npos,5,str2);
   std::cout << str << '\n';
   return 0;
}