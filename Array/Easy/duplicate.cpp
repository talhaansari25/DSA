#include <iostream>
#include <algorithm>
using namespace std;

void findDuplicate(int arr[], int n) {
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++) {
        if(arr[i] == arr[i+1]) {
            cout << "Duplicate element: " << arr[i] << endl;
            return;
        }
    }
}

int main() {
    int arr[] = {3, 1, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findDuplicate(arr, n);
    return 0;
}
