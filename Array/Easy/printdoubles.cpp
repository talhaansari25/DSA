// 1. print doubles

#include<iostream>
using namespace std;
int main()
{
    int arr[500];

    int n;
    cout<<"How many no you want to add in array: "<<endl;
    cin>>n;

    cout<<"Enter the no: "<<endl;
    for(int i=0; i<n; i+=1){
        cin>>arr[i];

    }

    cout<<"There doubles are as follows: ";
    for(int i=0; i<n; i++){
    cout<<2*arr[i]<<" ";
    }

   return 0;
 }