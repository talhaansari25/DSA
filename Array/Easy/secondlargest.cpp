#include<iostream>
#include<climits>
using namespace std;

int findSecond(int arr[], int size){
    int first = INT_MIN;
    int second = INT_MIN;

    for(int i=0; i<size;  i++){
        if(arr[i]>first){
           
            second = first;
             first = arr[i];
        }
        else if(arr[i]>second && first!=second){
         second = arr[i];
        }
    }
    if(second != INT_MIN){
        return second;
    }
    else{
        return -1;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Second largets element in Array is: "<<findSecond(arr,size);
   return 0;
}


// method 2

// #include <iostream>
// #include <algorithm> // for sort
// using namespace std;

// int getSecondLargest(int arr[], int n) {
//     sort(arr, arr + n); // sort in ascending order

//     for(int i = n-2; i >= 0; i--) {
//         if(arr[i] != arr[n-1]) { // check not equal to largest
//             return arr[i];
//         }
//     }
//     return -1; // all elements same
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int secondLargest = getSecondLargest(arr, n);

//     if(secondLargest == -1)
//         cout << "No second largest element (all elements are equal)" << endl;
//     else
//         cout << "Second largest element is: " << secondLargest << endl;

//     return 0;
// }


