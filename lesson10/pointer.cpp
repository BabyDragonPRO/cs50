#include <iostream>
using namespace std;

int main(){
    int count = 5;
    int *p_count;

    p_count = &count;

    cout << p_count << endl;
    cout << &cout << endl;
}