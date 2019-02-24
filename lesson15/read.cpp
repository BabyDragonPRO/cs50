#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){
    string line;
    ifstream file ("test.txt");
    if(file.is_open()){
        while( getline(file,line)){
            cout << line << endl;
        }
    }
    return 0;

}