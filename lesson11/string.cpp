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
    //str.erase(remove(str.begin(), str.end(), 'd'), str.end());
    cout << str << endl;

    //vector<int>vec(10);// = {1,2,3,4,5,6,7,8,9,10};

    //for(int i = 0; i < vec.size(); i++){
        //vec[i] = i * i;
    //}
    //vec[0] = 12;
    //vec[4] = 124;
    //vec[2] = 1234;
    //vec[1] = 323;
    //vec[7] = 123124;

    //cout << endl;

    vector<char> vec(str.begin(),str.end());
    cout << boolalpha << is_quote(vec, "reklam") << '\n'
                      << is_quote(vec, "car") << '\n';

    for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << endl;
    }

    cout << str << endl;
    return 0;
}