//bublesort
#include <iostream>

using namespace std;
const int SIZE = 5;

void buble (int mas[], int SIZE);

int main(){
    int mas[SIZE] = {5,4,3,2,1};
    for(int i = 0; i < SIZE; i++){
        cout << mas[i] << " ";
    }
    cout << endl;
    buble(mas,SIZE);
    for(int i = 0; i < SIZE; i++){
        cout <<mas[i] << " ";
    }
}

void buble (int mas[],int SIZE){
    for(int i = 0; i < SIZE; i++){
        for(int a = i+1; a < SIZE; a++){
            if(mas[i] > mas[a]){
                int x = mas[i];
                mas[i] = mas[a];
                mas[a] = x;
            }
        }
    }
}