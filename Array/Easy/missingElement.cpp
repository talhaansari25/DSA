#include<iostream>
using namespace std;

int findMissing(int arr[], int n){
    int total = n*(n+1)/2;
    int sum = 0;

    for(int i=0; i<n-1; i++){
        sum = arr[i]+sum;
    }
    return total-sum;
}
int main()
{
    int arr[]={1,2,3,5};
    int n = 5;

    
    cout << "Missing element: " << findMissing(arr, n) << endl;
   return 0;
}