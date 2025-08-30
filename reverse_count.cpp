// 2. reverse print counting using recurssion
#include<iostream>
using namespace std;

void print(int  n){
    if(n==0){
        return;
    }
    else{
    cout<<n<<" ";
    print(n-1);

    //if not reverse counting
    //print(n-1)
    // cout<<n<<" ";

    }

}
int main()
{
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    cout<<"Sum upto "<<n<<" is ";
    print(n);
   return 0;
}
