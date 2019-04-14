#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
    int x = 5;
    int* pX = &x;

    cout << "x is " << x << endl;
    cout << "x is no..." << endl;
    cout << "&x is " << &x << endl;

    cout << "pX is " << pX << endl;
    cout << "*pX is " << *pX << endl;
    cout << "&pX is " << &pX << endl;

    return 0;
}