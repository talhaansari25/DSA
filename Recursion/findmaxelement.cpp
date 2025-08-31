// 5. finding max element

#include<iostream>
#include<limits>
using namespace std;

void find(int arr[], int n, int i,int& maxi){ // int& should be pass by refrence
    //base case
    if(i>=n){
        return;
    }

    //solving one case baaki recc sambhal lega
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    find(arr,n,i+1,maxi);
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n = 5;
    int i = 0;
    int maxi = INT8_MIN;
    find(arr,n,i,maxi);
    cout<<"Max element of array is "<<maxi<<endl;
    
   return 0;
}