//3. fibonacci series
#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the term: ";
    cin>>n;

    int ans = fib(n);

    cout<<"the "<<n<<"th term of series is "<<ans;
   return 0;
}