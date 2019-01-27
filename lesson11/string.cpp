#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

template<typename Container>
bool is_quote(const Container& c, const string& s){
    return search(c.begin(), c.end(), s.begin(), s.end()) != c.end();
}

int main(int argc, const char *argv[]){
    string str = "Make reklam SOMEONE LOL";

    cout << str << endl;

    vector<char> vec(str.begin(),str.end());
    cout << boolalpha << is_quote(vec, "reklam") << '\n'
                      << is_quote(vec, "car") << '\n';

    for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << endl;
    }

    cout << str << endl;
    return 0;
}