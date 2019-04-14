#include <iostream>
using namespace std;

int main(){
    int x;
    string name = "";
    cout << "Write your name:" << endl;
    cin >> name;
    cout << "Write how many times you visited hell:" << endl;
    cin >> x;
    if(name == "Danil" || name == "danil"){
        x = 6666;
    }
    cout << "Welcome to hell, " << name << "." << endl << "You have visited hell " << x << " times." << endl;
    return 0;
}
