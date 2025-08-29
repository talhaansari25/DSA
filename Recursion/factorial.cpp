// 1. factorial using recursion

#include<iostream>
using namespace std;

int fact(int n){
    int ans;
    if(n == 1){
        return 1;
    }
    else{
        ans = n*fact(n-1);   
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    int factorial = fact(n);
    cout<<"factorial of "<<n<<" is "<<factorial<<endl;
   return 0;
}