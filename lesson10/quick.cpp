#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
 for (int i =0; i < size; i++)
  cout << arr[i] << " ";
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int count = 5;
    int *p_count;

    p_count = &count;

    cout << p_count << endl;
    cout << &cout << endl;
}