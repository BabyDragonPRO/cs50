#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if(r >= l)
    {
        int mid = l + (r - l) / 2;
        if ( arr[mid] == x)
            return binarySearch(arr, l, mid-1, x);
        else
            return binarySearch(arr, mid+1, r, x);
    }

    return -1;
}

int main(void)
{
    int array[] = {3, 4, 23, 42, 77, 100};

    int n = sizeof(array)/sizeof(array[0]);

    int x = 42;

    int result = binarySearch(array, 0, n-1, x);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index" << result;

}