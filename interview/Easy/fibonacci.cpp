#include<iostream>
using namespace std;

int fib(int n){

    // if(n<=1) return n;
    // return fib(n-1)+fib(n-1);

    int a = 0, b = 1, c;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = a;
    }
    return b;
}


int main()
{
    int n = 7;
    cout<<"fibonacci"<<fib(n)<<endl;
   return 0;
}