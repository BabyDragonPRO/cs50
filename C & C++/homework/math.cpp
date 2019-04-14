#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void){
    string line;
    ifstream file ("data.dat");
    float arr[] = {0,0,0,0,0,0};
    if(file.is_open()){
        int i = 0;
        string text;
        while( getline(file,line)){
            text = line;
            arr[i] = atoi(text.c_str());
            i = i+1;
        }
    }
    if(arr[0] == 0){
        cout << "A = " << arr[0] << ". B = " << arr[1] << ". C = " << arr[2] << ". X = " << 0 << endl;
    }
    else{
        arr[5] = (arr[1] * arr[1]) - (4 * arr[0] * arr[2]);
        if(arr[5] < 0){
            cout << "There are no solutions in real numbers." << endl;
        }
        else{
            arr[3] = (-1 * arr[1] + sqrt(arr[5])) / (2 * arr[0]);
            arr[4] = (-1 * arr[1] - sqrt(arr[5])) / (2 * arr[0]);
            cout << "A = " << arr[0] << ". B = " << arr[1] << ". C = " << arr[2] << ". X1 = " << arr[3] << ". X2 = " << arr[4] << ". D = "<< arr[5] << endl;
        }
    }

    return 0;

}