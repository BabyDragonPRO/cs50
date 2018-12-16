//quicksort

#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void toBegining(int arr[],int num){
    int SIZE = sizeof(arr)/sizeof(arr[0]);
    for(int i = SIZE; i > 0; i--){
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
}

/*vodi toLast(int arr,int num,int b){
    int SIZE = sizeof(arr)/sizeof(arr[0]);
    for(int i = SIZE; i > 0; i--){
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
}*/

void quickSort(int arr[], int n){
    int op = 0;

    for(int i = 1; i < n-1; i++){
        if(arr[i] < arr[op]){
            toBegining(arr, arr[i]);
            op++;
        }
        if(arr[op] < arr[i]){
            //toLast(arr,arr[i],)
        }
    }
}

void printArray(int arr[], int size) {
 for (int i =0; i < size; i++)
  cout << arr[i] << " ";
}

int main() {
 int arr[] = {5,4,3,4,3,2};
 int n = sizeof(arr)/sizeof(arr[0]);
 quickSort(arr, n);
 printArray(arr, n);

 return 0;
}