//4. print extreme

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    int start = 0;
    int end = size-1;

    while(start<=end){
        if(start==end){
            cout<<arr[start]<<endl;
        }
        else{
        cout<<arr[start]<<endl;
        cout<<arr[end]<<endl;
        }
         start++;
        end--;
    }
   return 0;
}