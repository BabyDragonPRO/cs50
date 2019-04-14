#include <iostream>
using namespace std;

void linearSearch(int arr[],int s, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == s){
            cout << "found on index " << i << " ";
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(0);
    linearSearch(arr,1,n);
}