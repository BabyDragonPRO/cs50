#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(void){
    string x;
    cin >>  x;
    ofstream file;
    string name = "example.txt";
    char* y = new char[y, name.length() + 1];
    strcpy(y,name.c_str());
    file.open (y, ios::out);
    if(file.is_open()){
        file << "Writing\n";
    }
    file.close();
    return 0;
}